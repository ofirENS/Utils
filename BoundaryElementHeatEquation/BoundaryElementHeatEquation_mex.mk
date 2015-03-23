START_DIR = D:\Ofir\Work\ENS\TESTFI~1\code\HEATEQ~1

MATLAB_ROOT = D:\PROGRA~1\MATLAB\R2014a
MAKEFILE = BoundaryElementHeatEquation_mex.mk

include BoundaryElementHeatEquation_mex.mki


SRC_FILES =  \
	BoundaryElementHeatEquation_mexutil.c \
	BoundaryElementHeatEquation_data.c \
	BoundaryElementHeatEquation_initialize.c \
	BoundaryElementHeatEquation_terminate.c \
	Acoeff.c \
	Bcoeff.c \
	CalculateA1B1B1Star.c \
	CalculateABBStarD.c \
	CalculateC.c \
	CalculateHeatSolution.c \
	CalculateXY.c \
	Ccoeff.c \
	Cone.c \
	Dcoeff.c \
	Done.c \
	GetRegularizationTerm.c \
	PlotResults.c \
	TestBemHeatEq_optimized.c \
	all.c \
	mrdivide.c \
	rdivide.c \
	eml_error.c \
	abs.c \
	mpower.c \
	erf.c \
	colon.c \
	eml_int_forloop_overflow_check.c \
	eml_warning.c \
	sum.c \
	eye.c \
	diag.c \
	error.c \
	mod.c \
	_coder_BoundaryElementHeatEquation_api.c \
	BoundaryElementHeatEquation_emxutil.c \
	_coder_BoundaryElementHeatEquation_mex.c \
	_coder_BoundaryElementHeatEquation_info.c

MEX_FILE_NAME_WO_EXT = BoundaryElementHeatEquation
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = 


#
#====================================================================
# gmake makefile fragment for building MEX functions using MSVC
# Copyright 2007-2013 The MathWorks, Inc.
#====================================================================
#
SHELL = cmd
OBJEXT = obj
CC = $(COMPILER)
LD = $(LINKER)
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLIST  = $(OBJLISTC:.cpp=.$(OBJEXT))

ifneq (,$(findstring $(EMC_COMPILER),msvc80 msvc90 msvc100 msvc100free msvc110 msvc120 msvcsdk))
  TARGETMT = $(TARGET).manifest
  MEX = $(TARGETMT)
  STRICTFP = /fp:strict
else
  MEX = $(TARGET)
  STRICTFP = /Op
endif

target: $(MEX)

MATLAB_INCLUDES = /I "$(MATLAB_ROOT)\simulink\include"
MATLAB_INCLUDES+= /I "$(MATLAB_ROOT)\toolbox\shared\simtargets"
SYS_INCLUDE = $(MATLAB_INCLUDES)

# Additional includes

SYS_INCLUDE += /I "$(START_DIR)"
SYS_INCLUDE += /I "$(START_DIR)\codegen\mex\BoundaryElementHeatEquation"
SYS_INCLUDE += /I "$(START_DIR)\codegen\mex\BoundaryElementHeatEquation\interface"
SYS_INCLUDE += /I "$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += /I "."

DIRECTIVES = $(MEX_FILE_NAME_WO_EXT)_mex.arf
COMP_FLAGS = $(COMPFLAGS) $(OMPFLAGS) -DMX_COMPAT_32
LINK_FLAGS = $(filter-out /export:mexFunction, $(LINKFLAGS))
LINK_FLAGS += /NODEFAULTLIB:LIBCMT
ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS) $(STRICTFP)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += $(OMPLINKFLAGS)
LINK_FLAGS += /OUT:$(TARGET)
LINK_FLAGS += 

CFLAGS =  $(COMP_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS =  $(CFLAGS)

%.$(OBJEXT) : %.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CC) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\BoundaryElementHeatEquation/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\BoundaryElementHeatEquation/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CC) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(LINK_FLAGS) $(OBJLIST) $(USER_LIBS) $(SYS_LIBS) @$(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

$(TARGETMT): $(TARGET)
	mt -outputresource:"$(TARGET);2" -manifest "$(TARGET).manifest"

#====================================================================

