CXX = g++
#Requires C++11 compiler (used on gcc 4.8)
#Configure paths
SDL_LIB = SDL2
LIBS = -rpath /usr/local/lib
LIB_DIR = /usr/local/lib
LDFLAGS = -L$(LIB_DIR) -l$(SDL_LIB) -Wl,$(LIBS)

INC = ../include
SDL_INCLUDE = -I/usr/local/include/SDL2
IDIRS = -I$(INC) $(SDL_INCLUDE)

CXXOPTIMIZATION = -o
CXXFLAGS = -Wall -c -std=c++11
EXE = Pong_Game.exe

all: $(EXE)
	echo All finished

$(EXE): main.o
	$(CXX) $(CXXOPTIMIZATION) $@ $< $(LDFLAGS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $(IDIRS) $<

clean:
	rm *.o && rm $(EXE)
	echo Clean finished
