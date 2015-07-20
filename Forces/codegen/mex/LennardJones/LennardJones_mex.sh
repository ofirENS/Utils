MATLAB="/home/ofir/ProgramFiles/MATLAB2015"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ofir/.matlab/R2015a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for LennardJones" > LennardJones_mex.mki
echo "CC=$CC" >> LennardJones_mex.mki
echo "CFLAGS=$CFLAGS" >> LennardJones_mex.mki
echo "CLIBS=$CLIBS" >> LennardJones_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> LennardJones_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> LennardJones_mex.mki
echo "CXX=$CXX" >> LennardJones_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> LennardJones_mex.mki
echo "CXXLIBS=$CXXLIBS" >> LennardJones_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> LennardJones_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> LennardJones_mex.mki
echo "LD=$LD" >> LennardJones_mex.mki
echo "LDFLAGS=$LDFLAGS" >> LennardJones_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> LennardJones_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> LennardJones_mex.mki
echo "Arch=$Arch" >> LennardJones_mex.mki
echo OMPFLAGS= >> LennardJones_mex.mki
echo OMPLINKFLAGS= >> LennardJones_mex.mki
echo "EMC_COMPILER=gcc" >> LennardJones_mex.mki
echo "EMC_CONFIG=optim" >> LennardJones_mex.mki
"/home/ofir/ProgramFiles/MATLAB2015/bin/glnxa64/gmake" -B -f LennardJones_mex.mk
