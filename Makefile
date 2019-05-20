CFLAGS = -Wall -Werror
OBJ = g++ -std=c++11 $(CFLAGS) -c $< -o $@
TEST = g++ -std=c++11 $(GFLAGS) -I thirdparty/catch2 -c $< -o $@

.PHONY: clean

all: bin/geo.exe bin/geo_test


bin/geo.exe: build/src/geo.o build/src/areCollinear.o build/src/circle_intersects.o build/src/get.o build/src/perecech.o build/src/print.o build/src/projectionsIntersect.o build/src/proverka.o
	g++ -std=c++11 $(CFLAGS) $^ -o $@

build/src/geo.o: src/geo.c src/geo.h
	$(OBJ)

build/src/circle_intersects.o: src/circle_intersects.c src/geo.h
	$(OBJ)

build/src/print.o: src/print.c src/geo.h
	$(OBJ)

build/src/proverka.o: src/proverka.c src/geo.h
	$(OBJ)

build/src/perecech.o: src/perecech.c src/geo.h
	$(OBJ)

build/src/areCollinear.o: src/areCollinear.c src/geo.h
	$(OBJ)

build/src/get.o: src/get.c src/geo.h
	$(OBJ)

build/src/projectionsIntersect.o: src/projectionsIntersect.c src/geo.h
	$(OBJ)



bin/geo_test: build/test/test.o build/test/circle_intersects_test.o build/test/proverka_test.o build/test/get_test.o 
	g++ -std=c++11 $(CFLAGS)  $^ -o $@
	
build/test/proverka_test.o: test/proverka_test.c test/geo.h
	$(TEST)

build/test/areCollinear_test.o: test/areCollinear_test.c test/geo.h
	$(TEST)

build/test/get_test.o: test/get_test.c test/geo.h
	$(TEST)




clean:
	rm build/src/*.o
	rm build/test/*.o
	rm bin/*.exe
	rm -R -f build






 

