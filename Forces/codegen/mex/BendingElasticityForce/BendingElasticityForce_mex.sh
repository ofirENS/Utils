MATLAB="/usr/local/MATLAB/R2014a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ofir/.matlab/R2014a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for BendingElasticityForce" > BendingElasticityForce_mex.mki
echo "CC=$CC" >> BendingElasticityForce_mex.mki
echo "CFLAGS=$CFLAGS" >> BendingElasticityForce_mex.mki
echo "CLIBS=$CLIBS" >> BendingElasticityForce_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> BendingElasticityForce_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> BendingElasticityForce_mex.mki
echo "CXX=$CXX" >> BendingElasticityForce_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> BendingElasticityForce_mex.mki
echo "CXXLIBS=$CXXLIBS" >> BendingElasticityForce_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> BendingElasticityForce_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> BendingElasticityForce_mex.mki
echo "LD=$LD" >> BendingElasticityForce_mex.mki
echo "LDFLAGS=$LDFLAGS" >> BendingElasticityForce_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> BendingElasticityForce_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> BendingElasticityForce_mex.mki
echo "Arch=$Arch" >> BendingElasticityForce_mex.mki
echo OMPFLAGS= >> BendingElasticityForce_mex.mki
echo OMPLINKFLAGS= >> BendingElasticityForce_mex.mki
echo "EMC_COMPILER=gcc" >> BendingElasticityForce_mex.mki
echo "EMC_CONFIG=optim" >> BendingElasticityForce_mex.mki
"/usr/local/MATLAB/R2014a/bin/glnxa64/gmake" -B -f BendingElasticityForce_mex.mk
