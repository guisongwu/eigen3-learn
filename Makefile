#
# Library Locations
#
# PETSC_DIR=/opt/petsc-3.23.2
# PETSC_ARCH=
# MPI_DIR=/usr/lib/x86_64-linux-gnu/openmpi
EIGEN_DIR=/home/wugs/eigen3-learn/eigen3

# include ${PETSC_DIR}/lib/petsc/conf/petscvariables
# include ${PETSC_DIR}/lib/petsc/conf/variables
# include ${PETSC_DIR}/lib/petsc/conf/rules

# LAPACK_DIR=/opt/OpenBLAS-0.3.29
# MPREAL_DIR=
# MPFR_DIR=/usr/lib/x86_64-linux-gnu

# CC = mpicc 
# CXX = mpicxx 
CC = gcc 
CXX = g++ 

CFLAGS   = -g -Wall -Wextra -Wno-unused-variable -Wno-unused-parameter -Wno-unused-function -std=gnu17
CXXFLAGS = -g -Wall -Wextra -Wno-unused-variable -Wno-unused-parameter -Wno-unused-function -Wno-unused-but-set-variable -Wno-comment -Wno-sign-compare -std=c++20

CPPFLAGS = -I/usr/include/eigen3
# CPPFLAGS = -I/usr/include/eigen3 -I$(PETSC_DIR)/include -I$(MPI_DIR)/include
# CPPFLAGS = -I/usr/include/eigen3 -I$(PETSC_DIR)/include

LDFLAGS = 
# LDFLAGS = -L$(MPI_DIR)/lib -Wl,-rpath=$(MPI_DIR)/lib -L$(PETSC_DIR)/lib -Wl,-rpath=$(PETSC_DIR)/lib
# LDFLAGS = -L$(PETSC_DIR)/lib -Wl,-rpath=$(PETSC_DIR)/lib

LDLIBS =
# LDLIBS = -lm -lmpi -lpetsc
# LDLIBS = -lm -lpetsc


# target files 
TARGETS = eigen_learn
# TARGETS = poisson testc testcpp poisson-rt0 helmholtz-rt0 helmholtz-rt0-sphere helmholtz-rt1 helmholtz-rt1-sphere mesh poisson-rt1 poisson-rt0-mix poisson-rt0-sphere poisson-rt1-sphere
# TARGETS = poisson testc
# TARGETS = testcpp poisson-rt

# default target(when "make" is called, all the target files will be built.)
all: $(TARGETS)

########################### Link ################################

eigen_learn: eigen_learn.o
	$(CXX) $(CXXFLAGS) $^ -o $@


########################### Compile #############################

# general build rule for C program to object file
%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

# general build rule for CPP program to object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

# clean object and target files
clean:
	rm -f *.o $(TARGETS)

# Pseudo-target declaration
.PHONY: all clean
