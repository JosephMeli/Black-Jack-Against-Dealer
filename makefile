CC=clang++
CFLAGS= -std=c++11
OFILES= Driver.o GameObjects.o
IFILES= Driver.cpp GameObjects.h
CLIENT=Driver.cpp
OBJ =  GameObjects.o Driver.cpp

main : project2
project2: $(OFILES)
	$(CC) -o project2 $(OFILES) $(CFLAGS)
	@echo "I HAD SO MUCH FUN DEVELOPING THIS"
	$ ./project2
driver.o: $(IFILES)
	$(CC) -c   $(CLIENT) $(CFLAGS)
valgrind: $(OBJ)
	$(CC) -g -o  $@ $^ $(CFLAGS)
	$ valgrind --tool=memcheck --show-leak-kinds=all --leak-check=full ./valgrind 
.PHONY: clean
clean:
	rm *.o project2 ./project2