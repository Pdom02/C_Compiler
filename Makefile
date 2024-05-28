### Make options, there's very few required but this is more for practice I suppose ###
ifdef OS
	RM = del /Q *.o
	COMPILER = "C:\msys64\ucrt64\bin\g++"
	OPTIONS = -Wall
else
	ifeq ($(shell uname), Linux)
		RM = rm -f *.o
	endif
endif	

# COMPILER = g++
# OPTIONS = -Wall

COMPILE=$(COMPILER) $(OPTIONS)

### Command for clean ###

# RM = rm
# OPTION=-f *.o

CLEAN=$(RM)

### End of options ###

all: program

program: main.o lexScanner.o
	$(COMPILE) main.o lexScanner.o -o program

main.o: main.cpp lexScanner.h
	$(COMPILE) -c main.cpp

lexScanner.o: lexScanner.cpp lexScanner.h TokenType.h Token.h Token.cpp
	$(COMPILE) -c lexScanner.cpp

clean:
	$(CLEAN) program.o