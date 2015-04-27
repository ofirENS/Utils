MATLAB="/home/ofir/Work/ProgramFiles/Matlab2014a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ofir/.matlab/R2014a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for GetEdgesVectors" > GetEdgesVectors_mex.mki
echo "CC=$CC" >> GetEdgesVectors_mex.mki
echo "CFLAGS=$CFLAGS" >> GetEdgesVectors_mex.mki
echo "CLIBS=$CLIBS" >> GetEdgesVectors_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> GetEdgesVectors_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> GetEdgesVectors_mex.mki
echo "CXX=$CXX" >> GetEdgesVectors_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> GetEdgesVectors_mex.mki
echo "CXXLIBS=$CXXLIBS" >> GetEdgesVectors_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> GetEdgesVectors_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> GetEdgesVectors_mex.mki
echo "LD=$LD" >> GetEdgesVectors_mex.mki
echo "LDFLAGS=$LDFLAGS" >> GetEdgesVectors_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> GetEdgesVectors_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> GetEdgesVectors_mex.mki
echo "Arch=$Arch" >> GetEdgesVectors_mex.mki
echo OMPFLAGS= >> GetEdgesVectors_mex.mki
echo OMPLINKFLAGS= >> GetEdgesVectors_mex.mki
echo "EMC_COMPILER=gcc" >> GetEdgesVectors_mex.mki
echo "EMC_CONFIG=optim" >> GetEdgesVectors_mex.mki
"/home/ofir/Work/ProgramFiles/Matlab2014a/bin/glnxa64/gmake" -B -f GetEdgesVectors_mex.mk
