MATLAB="/home/ofir/ProgramFiles/MATLAB2015"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ofir/.matlab/R2015a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for MechanicalSpringPointForce" > MechanicalSpringPointForce_mex.mki
echo "CC=$CC" >> MechanicalSpringPointForce_mex.mki
echo "CFLAGS=$CFLAGS" >> MechanicalSpringPointForce_mex.mki
echo "CLIBS=$CLIBS" >> MechanicalSpringPointForce_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> MechanicalSpringPointForce_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> MechanicalSpringPointForce_mex.mki
echo "CXX=$CXX" >> MechanicalSpringPointForce_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> MechanicalSpringPointForce_mex.mki
echo "CXXLIBS=$CXXLIBS" >> MechanicalSpringPointForce_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> MechanicalSpringPointForce_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> MechanicalSpringPointForce_mex.mki
echo "LD=$LD" >> MechanicalSpringPointForce_mex.mki
echo "LDFLAGS=$LDFLAGS" >> MechanicalSpringPointForce_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> MechanicalSpringPointForce_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> MechanicalSpringPointForce_mex.mki
echo "Arch=$Arch" >> MechanicalSpringPointForce_mex.mki
echo OMPFLAGS= >> MechanicalSpringPointForce_mex.mki
echo OMPLINKFLAGS= >> MechanicalSpringPointForce_mex.mki
echo "EMC_COMPILER=gcc" >> MechanicalSpringPointForce_mex.mki
echo "EMC_CONFIG=optim" >> MechanicalSpringPointForce_mex.mki
"/home/ofir/ProgramFiles/MATLAB2015/bin/glnxa64/gmake" -B -f MechanicalSpringPointForce_mex.mk
