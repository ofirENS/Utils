MATLAB="/usr/local/MATLAB/R2014a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ofir/.matlab/R2014a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for MorseForce" > MorseForce_mex.mki
echo "CC=$CC" >> MorseForce_mex.mki
echo "CFLAGS=$CFLAGS" >> MorseForce_mex.mki
echo "CLIBS=$CLIBS" >> MorseForce_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> MorseForce_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> MorseForce_mex.mki
echo "CXX=$CXX" >> MorseForce_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> MorseForce_mex.mki
echo "CXXLIBS=$CXXLIBS" >> MorseForce_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> MorseForce_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> MorseForce_mex.mki
echo "LD=$LD" >> MorseForce_mex.mki
echo "LDFLAGS=$LDFLAGS" >> MorseForce_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> MorseForce_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> MorseForce_mex.mki
echo "Arch=$Arch" >> MorseForce_mex.mki
echo OMPFLAGS= >> MorseForce_mex.mki
echo OMPLINKFLAGS= >> MorseForce_mex.mki
echo "EMC_COMPILER=gcc" >> MorseForce_mex.mki
echo "EMC_CONFIG=optim" >> MorseForce_mex.mki
"/usr/local/MATLAB/R2014a/bin/glnxa64/gmake" -B -f MorseForce_mex.mk
