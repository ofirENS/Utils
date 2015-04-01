@echo off
set MATLAB=D:\PROGRA~1\MATLAB\R2014a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2014a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=BendingElasticityForce_mex
set MEX_NAME=BendingElasticityForce_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for BendingElasticityForce > BendingElasticityForce_mex.mki
echo COMPILER=%COMPILER%>> BendingElasticityForce_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> BendingElasticityForce_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> BendingElasticityForce_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> BendingElasticityForce_mex.mki
echo LINKER=%LINKER%>> BendingElasticityForce_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> BendingElasticityForce_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> BendingElasticityForce_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> BendingElasticityForce_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> BendingElasticityForce_mex.mki
echo BORLAND=%BORLAND%>> BendingElasticityForce_mex.mki
echo OMPFLAGS= >> BendingElasticityForce_mex.mki
echo OMPLINKFLAGS= >> BendingElasticityForce_mex.mki
echo EMC_COMPILER=msvc110>> BendingElasticityForce_mex.mki
echo EMC_CONFIG=optim>> BendingElasticityForce_mex.mki
"D:\Program Files\MATLAB\R2014a\bin\win64\gmake" -B -f BendingElasticityForce_mex.mk
