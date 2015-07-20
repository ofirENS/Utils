//
// File: SpringForce.cpp
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 20-Jul-2015 21:26:14
//

// Include Files
#include "rt_nonfinite.h"
#include "SpringForce.h"
#include "SpringForce_emxutil.h"

// Function Definitions

//
// Calculate the spring force between N particles in any dimension M.
//  particleDist    - NxN matrix of pairwise particle distances
//  springConst     - NxN double matrix of spring constants
//  connectivityMap - NxN binary matrix which defines the connectivity between particles
//  minParticleDist - minimal distance between particles
//  fixedParticleNum - particles in the system which do not move
// Arguments    : emxArray_real_T *particleDist
//                const emxArray_real_T *springConst
//                const emxArray_boolean_T *connectivityMap
//                const emxArray_real_T *minParticleDist
//                const emxArray_real_T *fixedParticleNum
//                emxArray_real_T *force
// Return Type  : void
//
void SpringForce(emxArray_real_T *particleDist, const emxArray_real_T
                 *springConst, const emxArray_boolean_T *connectivityMap, const
                 emxArray_real_T *minParticleDist, const emxArray_real_T
                 *fixedParticleNum, emxArray_real_T *force)
{
  emxArray_real_T *y;
  int j;
  int vstride;
  int iy;
  emxArray_real_T *L;
  int ixstart;
  unsigned int sz[2];
  emxArray_real_T *sumForces;
  int ix;
  double s;
  int k;
  emxArray_int32_T *r0;
  emxInit_real_T(&y, 2);

  //  force              = springConst.*particleDist.*connectivityMap;
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)y, j, (int)sizeof(double));
  vstride = particleDist->size[0];
  j = y->size[0] * y->size[1];
  y->size[1] = vstride;
  emxEnsureCapacity((emxArray__common *)y, j, (int)sizeof(double));
  iy = particleDist->size[0];
  for (j = 0; j < iy; j++) {
    y->data[j] = rtInf;
  }

  emxInit_real_T(&L, 2);
  ixstart = y->size[1];
  vstride = y->size[1];
  j = L->size[0] * L->size[1];
  L->size[0] = ixstart;
  emxEnsureCapacity((emxArray__common *)L, j, (int)sizeof(double));
  j = L->size[0] * L->size[1];
  L->size[1] = vstride;
  emxEnsureCapacity((emxArray__common *)L, j, (int)sizeof(double));
  iy = ixstart * vstride;
  for (j = 0; j < iy; j++) {
    L->data[j] = 0.0;
  }

  for (j = 0; j + 1 <= y->size[1]; j++) {
    L->data[j + L->size[0] * j] = rtInf;
  }

  emxFree_real_T(&y);
  j = particleDist->size[0] * particleDist->size[1];
  emxEnsureCapacity((emxArray__common *)particleDist, j, (int)sizeof(double));
  j = particleDist->size[0];
  vstride = particleDist->size[1];
  iy = j * vstride;
  for (j = 0; j < iy; j++) {
    particleDist->data[j] += L->data[j];
  }

  j = L->size[0] * L->size[1];
  L->size[0] = minParticleDist->size[0];
  L->size[1] = minParticleDist->size[1];
  emxEnsureCapacity((emxArray__common *)L, j, (int)sizeof(double));
  iy = minParticleDist->size[0] * minParticleDist->size[1];
  for (j = 0; j < iy; j++) {
    L->data[j] = (1.0 - minParticleDist->data[j] / particleDist->data[j]) *
      (double)connectivityMap->data[j];
  }

  for (j = 0; j < 2; j++) {
    sz[j] = (unsigned int)L->size[j];
  }

  b_emxInit_real_T(&sumForces, 1);
  j = sumForces->size[0];
  sumForces->size[0] = (int)sz[0];
  emxEnsureCapacity((emxArray__common *)sumForces, j, (int)sizeof(double));
  if ((L->size[0] == 0) || (L->size[1] == 0)) {
    j = sumForces->size[0];
    sumForces->size[0] = (int)sz[0];
    emxEnsureCapacity((emxArray__common *)sumForces, j, (int)sizeof(double));
    iy = (int)sz[0];
    for (j = 0; j < iy; j++) {
      sumForces->data[j] = 0.0;
    }
  } else {
    vstride = L->size[0];
    iy = -1;
    ixstart = -1;
    for (j = 1; j <= vstride; j++) {
      ixstart++;
      ix = ixstart;
      s = L->data[ixstart];
      for (k = 2; k <= L->size[1]; k++) {
        ix += vstride;
        s += L->data[ix];
      }

      iy++;
      sumForces->data[iy] = s;
    }
  }

  ixstart = sumForces->size[0];
  vstride = sumForces->size[0];
  j = force->size[0] * force->size[1];
  force->size[0] = ixstart;
  emxEnsureCapacity((emxArray__common *)force, j, (int)sizeof(double));
  j = force->size[0] * force->size[1];
  force->size[1] = vstride;
  emxEnsureCapacity((emxArray__common *)force, j, (int)sizeof(double));
  iy = ixstart * vstride;
  for (j = 0; j < iy; j++) {
    force->data[j] = 0.0;
  }

  for (j = 0; j + 1 <= sumForces->size[0]; j++) {
    force->data[j + force->size[0] * j] = sumForces->data[j];
  }

  emxFree_real_T(&sumForces);
  j = force->size[0] * force->size[1];
  force->size[0] = springConst->size[0];
  force->size[1] = springConst->size[1];
  emxEnsureCapacity((emxArray__common *)force, j, (int)sizeof(double));
  iy = springConst->size[0] * springConst->size[1];
  for (j = 0; j < iy; j++) {
    force->data[j] = springConst->data[j] * (force->data[j] - L->data[j]);
  }

  emxFree_real_T(&L);
  emxInit_int32_T(&r0, 1);

  //  set the maindiagonal
  j = r0->size[0];
  r0->size[0] = fixedParticleNum->size[1];
  emxEnsureCapacity((emxArray__common *)r0, j, (int)sizeof(int));
  iy = fixedParticleNum->size[1];
  for (j = 0; j < iy; j++) {
    r0->data[j] = (int)fixedParticleNum->data[fixedParticleNum->size[0] * j];
  }

  iy = force->size[1];
  ixstart = r0->size[0];
  for (j = 0; j < iy; j++) {
    for (ix = 0; ix < ixstart; ix++) {
      force->data[(r0->data[ix] + force->size[0] * j) - 1] = 0.0;
    }
  }

  //  zero out forces for fixed particles
  j = r0->size[0];
  r0->size[0] = fixedParticleNum->size[1];
  emxEnsureCapacity((emxArray__common *)r0, j, (int)sizeof(int));
  iy = fixedParticleNum->size[1];
  for (j = 0; j < iy; j++) {
    r0->data[j] = (int)fixedParticleNum->data[fixedParticleNum->size[0] * j];
  }

  iy = force->size[0];
  vstride = r0->size[0];
  for (j = 0; j < vstride; j++) {
    for (ix = 0; ix < iy; ix++) {
      force->data[ix + force->size[0] * (r0->data[j] - 1)] = 0.0;
    }
  }

  emxFree_int32_T(&r0);

  //  zero out forces for fixed particles
}

//
// File trailer for SpringForce.cpp
//
// [EOF]
//
