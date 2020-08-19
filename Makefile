CC=g++
OBJs= test.o bigNum.o
SRC= test.cpp bigNum.cpp
EXEC=genNum
LD= -o $(EXEC)
C= -c

all: $(OBJs)
	$(CC) $(LD) $(OBJs)
$(OBJs): $(SRC)
	$(CC) $(C) $(SRC)
clean:
	rm $(OBJs) $(EXEC)
