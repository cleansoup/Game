CXX = g++
#Requires C++11 compiler (used on gcc 4.8)
#Configure paths
SDL_LIB = -L/usr/local/lib -lSDL2 -Wl,-rpath /usr/local/lib/
SDL_INCLUDE = -I/usr/local/include/SDL2

INC = ../include
IDIRS = -I$(INC)

CXXOPTIMIZATION = -o
CXXFLAGS = -Wall -c -std=c++11 $(SDL_INCLUDE) $(IDIRS)
LDFLAGS = $(SDL_LIB) 
EXE = Pong_Game

all: $(EXE)

$(EXE): main.o
	$(CXX) $< $(LDFLAGS) $(CXXOPTIMIZATION) $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $< $(CXXOPTIMIZATION) $@

clean:
	rm *.o && rm $(EXE)
