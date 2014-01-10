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

_OBJ = main.o Point2d.o Force2d.o Velocity2d.o Puck.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ) )
ODIR = obj

_DEPS = *.h
DEPS = $(patsubst %,$(INC)/%,$(_DEPS))

CXXOPTIMIZATION = -Wall -g
CXXFLAGS = -Wall -std=c++11 $(IDIRS) -g
EXE = Pong_Game.exe

all: $(EXE)
	echo All finished

$(EXE): $(OBJ)
	echo Object Files Created
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CXX) -c $< -o $@ $(CXXFLAGS)

$(OBJ) : | obj

obj:
	@mkdir -p $@

clean:
	rm -r $(ODIR) && rm -p $(EXE)
	echo Clean finished
