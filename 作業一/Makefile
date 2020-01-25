main.out: main.o coordinate_sys.o cartesian_sys.o polar_sys.o
	g++ -o main.out main.o coordinate_sys.o cartesian_sys.o polar_sys.o
 
main.o: main.cpp
	g++ -c main.cpp
 
coordinate_sys.o: coordinate_sys.cpp coordinate_sys.h
	g++ -c coordinate_sys.cpp

b.o: cartesian_sys.cpp cartesian_sys.h
	g++ -c cartesian_sys.cpp

c.o: polar_sys.cpp polar_sys.h
	g++ -c polar_sys.cpp