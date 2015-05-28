MATLAB="/usr/local/MATLAB/R2014a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ofir/.matlab/R2014a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for SpringForce" > SpringForce_mex.mki
echo "CC=$CC" >> SpringForce_mex.mki
echo "CFLAGS=$CFLAGS" >> SpringForce_mex.mki
echo "CLIBS=$CLIBS" >> SpringForce_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> SpringForce_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> SpringForce_mex.mki
echo "CXX=$CXX" >> SpringForce_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> SpringForce_mex.mki
echo "CXXLIBS=$CXXLIBS" >> SpringForce_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> SpringForce_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> SpringForce_mex.mki
echo "LD=$LD" >> SpringForce_mex.mki
echo "LDFLAGS=$LDFLAGS" >> SpringForce_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> SpringForce_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> SpringForce_mex.mki
echo "Arch=$Arch" >> SpringForce_mex.mki
echo OMPFLAGS= >> SpringForce_mex.mki
echo OMPLINKFLAGS= >> SpringForce_mex.mki
echo "EMC_COMPILER=gcc" >> SpringForce_mex.mki
echo "EMC_CONFIG=optim" >> SpringForce_mex.mki
"/usr/local/MATLAB/R2014a/bin/glnxa64/gmake" -B -f SpringForce_mex.mk
