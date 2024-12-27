CC = g++
CFLAGS = -std=c++17 -Wall -Wextra -pedantic
OBJ = main.o elements.o polyatomic_ions.o amino_acids.o vsepr.o common_functions.o
EXEC = quiz_game

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

elements.o: elements.cpp
	$(CC) $(CFLAGS) -c elements.cpp

polyatomic_ions.o: polyatomic_ions.cpp
	$(CC) $(CFLAGS) -c polyatomic_ions.cpp

amino_acids.o: amino_acids.cpp
	$(CC) $(CFLAGS) -c amino_acids.cpp

vsepr.o: vsepr.cpp
	$(CC) $(CFLAGS) -c vsepr.cpp

common_functions.o: common_functions.cpp
	$(CC) $(CFLAGS) -c common_functions.cpp

clean:
	rm -f $(OBJ) $(EXEC)