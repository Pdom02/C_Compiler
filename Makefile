ifeq (a, $(shell echo "a"))
    COMPILER = g++
    OPTIONS = -Wall
    RM = rm -f
else
    RM = del /Q
    COMPILER = "C:\msys64\ucrt64\bin\g++"
    OPTIONS = -Wall
endif

SRCPATH = ./source
OBJPATH = ./obj
INCLUDEPATH = -I ./include
SOURCES = $(wildcard $(SRCPATH)/*.cpp)
OBJECTS = $(patsubst $(SRCPATH)/%.cpp, $(OBJPATH)/%.o, $(SOURCES))

COMPILE = $(COMPILER) $(OPTIONS) $(INCLUDEPATH)
CLEAN = $(RM) $(OBJPATH)/*.o program

.PHONY: all clean

all: $(OBJPATH) program

$(OBJPATH):
	mkdir -p $(OBJPATH)

program: $(OBJECTS)
	$(COMPILE) $^ -o $@

$(OBJPATH)/%.o: $(SRCPATH)/%.cpp
	$(COMPILE) -c $< -o $@

clean:
	$(CLEAN)
