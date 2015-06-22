MATLAB="/usr/local/MATLAB/R2014a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ofir/.matlab/R2014a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for BendingElasticity" > BendingElasticity_mex.mki
echo "CC=$CC" >> BendingElasticity_mex.mki
echo "CFLAGS=$CFLAGS" >> BendingElasticity_mex.mki
echo "CLIBS=$CLIBS" >> BendingElasticity_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> BendingElasticity_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> BendingElasticity_mex.mki
echo "CXX=$CXX" >> BendingElasticity_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> BendingElasticity_mex.mki
echo "CXXLIBS=$CXXLIBS" >> BendingElasticity_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> BendingElasticity_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> BendingElasticity_mex.mki
echo "LD=$LD" >> BendingElasticity_mex.mki
echo "LDFLAGS=$LDFLAGS" >> BendingElasticity_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> BendingElasticity_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> BendingElasticity_mex.mki
echo "Arch=$Arch" >> BendingElasticity_mex.mki
echo OMPFLAGS= >> BendingElasticity_mex.mki
echo OMPLINKFLAGS= >> BendingElasticity_mex.mki
echo "EMC_COMPILER=gcc" >> BendingElasticity_mex.mki
echo "EMC_CONFIG=optim" >> BendingElasticity_mex.mki
"/usr/local/MATLAB/R2014a/bin/glnxa64/gmake" -B -f BendingElasticity_mex.mk
