# Artifact: Analytical characterization and design space exploration for optimization of CNNs

## Requirements 
* Python 3.8 (we recommend using miniconda https://docs.conda.io/en/latest/miniconda.html)
  * create virtual env with python 3.8 (https://docs.python.org/3/tutorial/venv.html)
  * activate virtual env (https://docs.python.org/3/tutorial/venv.html)
  * modules required: amplpy, sympy, joblib (pip install)
* Intel C++ Compiler (minimum version: 2019)
* AMPL -- https://ampl.com/try-ampl/download-a-free-demo/ (minimum version:  20181102)
* IPOPT -- https://ampl.com/products/solvers/all-solvers-for-ampl/ (minimum version:3.12.13)
* LLVM version 10.0 (for extra expreiment on avx512 only)
* likwid -- https://github.com/RRZE-HPC/likwidFor (for hardware counter measurements only)


## Notes

* For stable experiment results, please disable hyperthreads and fix the frequency to the base frequency of processor

## Experiments

### Reproducing figures in the submitted paper

#### compile avx2 ukr generator

``` 
cd /Vary_Layout_Ukr:
mkdir build
cd build
cmake ..
make
```

#### run preliminary experiments (The numbers reported in the paper were obtained using Intel i7-9700k processor)

```
cd TileLoopGenerator
//fix the PATH in run_fromfiles.sh to point to appropriate libraries and binaries
./run_fromfiles.sh yolo.txt 8
grep "avg" yolo.txt.dirK1611 
//grep "avg" * will show the average gflops results
//(in raw data the yolo layer is named continous. layer1->yolo0, layer2-> yolo2, layer3-> yolo4 ... layer11-> yolo23)

cd ../
./run_fromfiles.sh resnet.txt 8
grep "avg" resnet.txt.dirK1611 
./run_fromfiles.sh deepwise.txt 8
grep "avg" deepwise.txt.dirK1611

```

### Additional experiments
Note: Additional experiments were requrested by the shepeard

#### AVX512 experiments (We ran our experiments on an Intel i9-10908xe processor)

```
cd /avx512/TileLoopGenerator
//fix the PATH in run_fromfiles.sh to point to appropriate libraries and binaries
RUIFIX: fix commands below
./run_fromfiles.sh yolo.txt 18
grep  "avg" yolo.txt.dirK1611 
./run_fromfiles.sh resnet.txt 18
grep "avg" resnet.txt.dirK1611 
./run_fromfiles.sh deepwise.txt 18
grep "avg" deepwise.txt.dirK1611
./run_fromfiles_small.sh resnet.txt 16
grep "avg" resnet.txt.dirK1611 
./run_fromfiles_small.sh deepwise.txt 16
grep "avg" deepwise.txt.dirK1611

// for resnet and deepwise(mobileNet) on i9 (RUIFIX which i9?), we have 2 different ukr.  We ran both these microkernels and selected the best
```


#### Hardware counter validation

Note: 
  * We ran our experiments on an Intel i7-9700k machine
  * requires likwid

Steps:

* cd validation_all/gflop_validate  // or  /validation_all/hdwc_validate
* run the following bash files:
* gflop: run_valid_*.sh (* is mob/res/yolo)
* hdwc: runhc_*.sh

### onednn

* download onednn (https://github.com/oneapi-src/oneDNN) and check this version
* git checkout ad368f484
* put files under our onednn_test/ to onednn's example/
* check and fix the PATH in run_fromfiles.sh
* run script
  * AVX2: ./run_fromfiles.sh yolo.txt(or resnet/deepwise) 8  
  * AVX512: ./run_fromfiles.sh yolo.txt(or resnet/deepwise) 18
* then under yolo.txt.dir grep "avg" * to check results  


### TVM test

RUIFIX I am not sure if [1] and [2] is some references or some notes. Fix this

[1] See subfolder tvm-thread1

* Use TVM v0.6 commit 008aa838139bcd8e66c680f14a944f7af274a33d and LLVM-8

* Build TVM following its official website instruction

* Replace tvm/topi/python/topi/x86/conv2d.py with the file we provide(same file name). We create a TOPI registered function to invoke the convolution schedule and template which is the same as TVM built-in template but exposes it to the external call.

* For tuning and timing script you need to change the TVM_NUM_THREADS based on the target machine. see line 14-15 in both tuning and timing python script. Also for flush cache for multi-core, you need to change "num_of_core" in timing.c line 10.

* Modify dumped llvm file to invoke cache flush and timing. Execute modi-llvm.sh

* Build llvm file and generate shared object (.so) file by using
"clang-8 -shared -fPIC -mavx2 -march=native -O3 YOLO1.log.ll -o YOLO1.so timing.c -fopenmp=libomp "
You need to replace llvm file name and output file name if necessary. See generate_so.script for detail compile cmd. 

* Modify the shared library path in file “tune_conv2d_x86_timing.py” before measuring time(around line 75 "path_dso = ..."). 
tune_conv2d_x86_timing.py needs to load a ".so" file created in step 6 to do the time measurement. 
* Add corresponding file path in script “tune_all.sh”, “measure_all.sh”.
The script “run.sh” executes all training and time measure tasks at one time. If you want to do these tasks separately, run “tune_all.sh”, “measure_all.sh” separately.

[2] tvm-thread512 is the folder of avx512 tuning and timing scripts. Please follow the previous steps as in "tvm-thread1". 


