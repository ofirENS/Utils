@echo off
set MATLAB=D:\PROGRA~1\MATLAB\R2014a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2014a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=LennardJones_mex
set MEX_NAME=LennardJones_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for LennardJones > LennardJones_mex.mki
echo COMPILER=%COMPILER%>> LennardJones_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> LennardJones_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> LennardJones_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> LennardJones_mex.mki
echo LINKER=%LINKER%>> LennardJones_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> LennardJones_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> LennardJones_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> LennardJones_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> LennardJones_mex.mki
echo BORLAND=%BORLAND%>> LennardJones_mex.mki
echo OMPFLAGS= >> LennardJones_mex.mki
echo OMPLINKFLAGS= >> LennardJones_mex.mki
echo EMC_COMPILER=msvc110>> LennardJones_mex.mki
echo EMC_CONFIG=optim>> LennardJones_mex.mki
"D:\Program Files\MATLAB\R2014a\bin\win64\gmake" -B -f LennardJones_mex.mk
