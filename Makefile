FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/tienda.cpp -o bin/tienda.o
	g++ $(FLAGS) src/producto.cpp -o bin/producto.o
	g++ -shared -o bin/libtienda.so bin/tienda.o
	mkdir -p bin/include
	cp src/tienda.h src/producto.h ./bin/include
	
test:
	mkdir -p bin
	g++ $(FLAGS) src/tienda.cpp -o bin/tienda.o
	g++ $(FLAGS) src/producto.cpp -o bin/producto.o
	g++ $(FLAGS) tests/tienda_tests.cpp -o bin/tienda_tests.o
	g++ $(FLAGS) tests/productos_tests.cpp -o bin/productos_tests.o
	g++ -g -o bin/tests bin/tienda.o bin/producto.o bin/tienda_tests.o bin/productos_tests.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin
