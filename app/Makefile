#
# Makefile for gcov dynamic analysis quiz
#

app: main.o triangle.o
	g++ --coverage main.o triangle.o -o app

main.o: main.cpp triangle.h
	g++ --coverage -c main.cpp

triangle.o:  triangle.cpp triangle.h
	g++ --coverage -c triangle.cpp

clean:
	rm *.o *.gcno *.gcda *.gcov app



