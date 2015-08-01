MATLAB="/home/ofir/ProgramFiles/MATLAB2015"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ofir/.matlab/R2015a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for MechanicalPointForce" > MechanicalPointForce_mex.mki
echo "CC=$CC" >> MechanicalPointForce_mex.mki
echo "CFLAGS=$CFLAGS" >> MechanicalPointForce_mex.mki
echo "CLIBS=$CLIBS" >> MechanicalPointForce_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> MechanicalPointForce_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> MechanicalPointForce_mex.mki
echo "CXX=$CXX" >> MechanicalPointForce_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> MechanicalPointForce_mex.mki
echo "CXXLIBS=$CXXLIBS" >> MechanicalPointForce_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> MechanicalPointForce_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> MechanicalPointForce_mex.mki
echo "LD=$LD" >> MechanicalPointForce_mex.mki
echo "LDFLAGS=$LDFLAGS" >> MechanicalPointForce_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> MechanicalPointForce_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> MechanicalPointForce_mex.mki
echo "Arch=$Arch" >> MechanicalPointForce_mex.mki
echo OMPFLAGS= >> MechanicalPointForce_mex.mki
echo OMPLINKFLAGS= >> MechanicalPointForce_mex.mki
echo "EMC_COMPILER=gcc" >> MechanicalPointForce_mex.mki
echo "EMC_CONFIG=optim" >> MechanicalPointForce_mex.mki
"/home/ofir/ProgramFiles/MATLAB2015/bin/glnxa64/gmake" -B -f MechanicalPointForce_mex.mk
