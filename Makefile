
OBJ=Trajet.o TS.o TC.o Catalogue.o main.o
EXEC=TP2
FLAGS=-g -o0 -ansi -pedantic -Wall -std=c++11
DEFINES=

.PHONY : clear

clear :
	rm $(OBJ) $(EXEC)

run : $(EXEC)
	./TP2

%.o : %.cpp %.h
	g++ -c $(DEFINES) $<
	
$(EXEC) : $(OBJ)
	g++ $(FLAGS) $(DEFINES) -o $(EXEC) $(OBJ)

build_MAP: DEFINES = -DMAP

build_MAP : $(EXEC)
	