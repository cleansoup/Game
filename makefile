CXX = g++
#Requires C++11 compiler (used on gcc 4.8)
#Configure paths
SDL_LIB = -L/usr/local/lib -lSDL2 -Wl,-rpath=/usr/local/lib
SDL_INCLUDE = -I/usr/local/include

CXXOPTIMIZATION = -o
CXXFLAGS = -Wall -c -std=c++11 $(SDL_INCLUDE)
LDFLAGS = $(SDL_LIB)
EXE = Pong_Game
OBJFILES = main.o Force2d.o Velocity2d.o Point2d.o Puck.o

all: $(EXE)

$(EXE): $(OBJFILES)
	$(CXX) $(OBJFILES) $(LDFLAGS) $(CXXOPTIMIZATION) $@

main.o: main.cpp main.h
	$(CXX) $(CXXFLAGS) $< $(CXXOPTIMIZATION) $@

Force2d.o: Force2d.cpp Force2d.h
	$(CXX) $(CXXFLAGS) $< $(CXXOPTIMIZATION) $@

Velocity2d.o: Velocity2d.cpp Velocity2d.h
	$(CXX) $(CXXFLAGS) $< $(CXXOPTIMIZATION) $@

Point2d.o: Point2d.cpp Point2d.h
	$(CXX) $(CXXFLAGS) $< $(CXXOPTIMIZATION) $@

Puck.o: Puck.cpp Puck.h
	$(CXX) $(CXXFLAGS) $< $(CXXOPTIMIZATION) $@

Player.o: Player.cpp Player.h
	$(CXX) $(CXXFLAGS) $< $(CXXOPTIMIZATION) $@

clean:
	rm *.o && rm $(EXE)

tar:
	tar cfv $(EXE).tar main.h main.cpp Force2d.h Force2d.cpp Velocity2d.h Velocity2d.cpp Point2d.h Point2d.cpp Puck.h Puck.cpp 
