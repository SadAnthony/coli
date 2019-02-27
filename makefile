all: test

test: test_vec
	./test_vec

test_vec: test_vec.o
	g++ test_vec.o -o test_vec

test_vec.o: test_vec.cpp
	g++ -Wall -c test_vec.cpp

clean:
	rm -rf *.o test_vec
