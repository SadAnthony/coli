all: test

test: test_vec test_collision
	./test_vec
	./test_collision

test_vec: test_vec.o
	g++ test_vec.o -o test_vec

test_vec.o: test_vec.cpp
	g++ -Wall -c test_vec.cpp

test_collision: test_collision.o collision.o
	g++ test_collision.o collision.o -o test_collision

collision.o: collision.cpp
	g++ -Wall -c collision.cpp

test_collision.o: test_collision.cpp
	g++ -Wall -c test_collision.cpp

clean:
	rm -rf *.o test_vec test_collision
