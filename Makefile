CC=clang
INC=./inc
SRC=./src
BIN=./bin
OBJ=./obj
CFLAGS=-I$(INC)

run: $(BIN)/main
	$(BIN)/main

clean:
	rm -rf $(BIN)/*
	rm -rf $(OBJ)/*

$(BIN)/main: $(OBJ)/main.o $(OBJ)/lcg.o
	$(CC) -o $(BIN)/main $(OBJ)/main.o $(OBJ)/lcg.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) -c -o $(OBJ)/main.o $(CFLAGS) $(SRC)/main.c

$(OBJ)/lcg.o: $(SRC)/lcg.c $(INC)/lcg.h
	$(CC) -c $(SRC)/lcg.c $(CFLAGS) -o $(OBJ)/lcg.o
