@echo off
set MATLAB=D:\PROGRA~2\MATLAB\R2014a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2014a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=SpringForce_mex
set MEX_NAME=SpringForce_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for SpringForce > SpringForce_mex.mki
echo COMPILER=%COMPILER%>> SpringForce_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> SpringForce_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> SpringForce_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> SpringForce_mex.mki
echo LINKER=%LINKER%>> SpringForce_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> SpringForce_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> SpringForce_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> SpringForce_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> SpringForce_mex.mki
echo BORLAND=%BORLAND%>> SpringForce_mex.mki
echo OMPFLAGS= >> SpringForce_mex.mki
echo OMPLINKFLAGS= >> SpringForce_mex.mki
echo EMC_COMPILER=msvc110>> SpringForce_mex.mki
echo EMC_CONFIG=optim>> SpringForce_mex.mki
"D:\Program Files\MATLAB\R2014a\bin\win64\gmake" -B -f SpringForce_mex.mk
