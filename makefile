CC=clang++
CFLAGS= -std=c++11
OFILES= Driver.o GameObjects.o
IFILES= Driver.cpp GameObjects.h
CLIENT=Driver.cpp
OBJ =  GameObjects.o Driver.cpp

main : BlackJack
BlackJack: $(OFILES)
	$(CC) -o BlackJack $(OFILES) $(CFLAGS)
	@echo "I HAD SO MUCH FUN DEVELOPING THIS"
	$ ./BlackJack
driver.o: $(IFILES)
	$(CC) -c   $(CLIENT) $(CFLAGS)
valgrind: $(OBJ)
	$(CC) -g -o  $@ $^ $(CFLAGS)
	$ valgrind --tool=memcheck --show-leak-kinds=all --leak-check=full ./valgrind
.PHONY: clean
clean:
	rm *.o BlackJack ./BlackJack
