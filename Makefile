EXE = algorithms
SOURCES = main.cpp euclidean.cpp primes.cpp permutations.cpp helpers.cpp sorts.cpp dynamic.cpp
#SOURCEDIR = src
#SOURCES := $(shell find $(SOURCEDIR) -name '*.cpp')
VPATH = src:bin

OBJS = $(addsuffix .o, $(basename $(notdir $(SOURCES))))
BINS = $(addprefix bin/, $(OBJS))
UNAME_S := $(shell uname -s)

CXXFLAGS = -Iinclude
CXXFLAGS += -g -Wall -Wformat -Wno-unknown-pragmas -std=c++11


%.o:%.cpp
	mkdir -p bin
	$(CXX) $(CXXFLAGS) -c -o bin/$@ $<

all: $(EXE)
	@echo Build complete

$(EXE): $(OBJS)
	$(CXX) -o $@ $(BINS) $(CXXFLAGS)

clean:
	rm -f $(EXE) $(OBJS)