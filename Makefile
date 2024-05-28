### Make options, there's very few required but this is more for practice I suppose ###
COMPILER = g++
OPTIONS = -Wall

COMPILE=$(COMPILER) $(OPTIONS)

### Command for clean ###

COMMAND = rm
OPTION=-f *.o

CLEAN=$(COMMAND) $(OPTION)

### End of options ###

all: program

program: main.o lexScanner.o
	$(COMPILE) main.o lexScanner.o -o program.o

main.o: main.cpp lexScanner.h
	$(COMPILE) -c main.cpp

lexScanner.o: lexScanner.cpp lexScanner.h
	$(COMPILE) -c lexScanner.cpp

clean:
	$(CLEAN) program