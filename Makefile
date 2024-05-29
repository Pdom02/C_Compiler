### Make options, there's very few required but this is more for practice I suppose ###
ifeq (a, $(shell echo "a"))
	COMPILER = g++
	OPTIONS = -Wall
	RM = rm -f *.o

else
	RM = del /Q *.o
	COMPILER = "C:\msys64\ucrt64\bin\g++"
	OPTIONS = -Wall

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

program: main.o token.o
	$(COMPILE) main.o token.o -o program

main.o: main.cpp Token.h
	$(COMPILE) -c main.cpp

token.o: Token.cpp Token.h TokenType.h
	$(COMPILE) -c Token.cpp

clean:
	$(CLEAN) program.o