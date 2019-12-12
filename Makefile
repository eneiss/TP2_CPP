
OBJ=Trajet.o TS.o TC.o Catalogue.o main.o
EXEC=TP2
FLAGS=-g -o0

%.o : %.cpp %.h
	g++ -c $<

$(EXEC) : $(OBJ)
	g++ $(FLAGS) -o $(EXEC) $(OBJ)
	
.PHONY : clear

clear :
	rm $(OBJ) $(EXEC)

run : $(EXEC)
	./TP2

build_MAP :
	FLAGS += -DMAP
	$(EXEC)
	