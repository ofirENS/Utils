@echo off
set MATLAB=D:\PROGRA~1\MATLAB\R2014a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2014a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=GetEdgesVectors_mex
set MEX_NAME=GetEdgesVectors_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for GetEdgesVectors > GetEdgesVectors_mex.mki
echo COMPILER=%COMPILER%>> GetEdgesVectors_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> GetEdgesVectors_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> GetEdgesVectors_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> GetEdgesVectors_mex.mki
echo LINKER=%LINKER%>> GetEdgesVectors_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> GetEdgesVectors_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> GetEdgesVectors_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> GetEdgesVectors_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> GetEdgesVectors_mex.mki
echo BORLAND=%BORLAND%>> GetEdgesVectors_mex.mki
echo OMPFLAGS= >> GetEdgesVectors_mex.mki
echo OMPLINKFLAGS= >> GetEdgesVectors_mex.mki
echo EMC_COMPILER=msvc110>> GetEdgesVectors_mex.mki
echo EMC_CONFIG=optim>> GetEdgesVectors_mex.mki
"D:\Program Files\MATLAB\R2014a\bin\win64\gmake" -B -f GetEdgesVectors_mex.mk
