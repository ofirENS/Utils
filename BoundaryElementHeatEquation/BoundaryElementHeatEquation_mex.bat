@echo off
set MATLAB=D:\PROGRA~1\MATLAB\R2014a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2014a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=BoundaryElementHeatEquation
set MEX_NAME=BoundaryElementHeatEquation
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for BoundaryElementHeatEquation > BoundaryElementHeatEquation_mex.mki
echo COMPILER=%COMPILER%>> BoundaryElementHeatEquation_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> BoundaryElementHeatEquation_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> BoundaryElementHeatEquation_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> BoundaryElementHeatEquation_mex.mki
echo LINKER=%LINKER%>> BoundaryElementHeatEquation_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> BoundaryElementHeatEquation_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> BoundaryElementHeatEquation_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> BoundaryElementHeatEquation_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> BoundaryElementHeatEquation_mex.mki
echo BORLAND=%BORLAND%>> BoundaryElementHeatEquation_mex.mki
echo OMPFLAGS= >> BoundaryElementHeatEquation_mex.mki
echo OMPLINKFLAGS= >> BoundaryElementHeatEquation_mex.mki
echo EMC_COMPILER=msvc110>> BoundaryElementHeatEquation_mex.mki
echo EMC_CONFIG=optim>> BoundaryElementHeatEquation_mex.mki
"D:\Program Files\MATLAB\R2014a\bin\win64\gmake" -B -f BoundaryElementHeatEquation_mex.mk
