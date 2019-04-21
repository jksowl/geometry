CFLAGS= -Wall -Werror
OBJ = g++ $(CFLAGS) -c $< -o $@
.PHONY: clean

all: target1 target2 bin/geo.exe
		
target1:
	mkdir -p build
		
target2:
	mkdir -p bin 

bin/geo.exe: build/areCollinear.o build/proverka.o build/projectionsIntersect.o build/print.o build/perecech.o build/get.o build/geo.o build/circle_intersects.o
	g++ $(CFLAGS) $^ -o $@

build/areCollinear.o: src/areCollinear.c src/geo.h
	$(OBJ)
build/proverka.o: src/proverka.c src/geo.h
	$(OBJ)
build/projectionsIntersect.o: src/projectionsIntersect.c src/geo.h 
	$(OBJ)
build/print.o: src/print.c src/geo.h 
	$(OBJ)
build/perecech.o: src/perecech.c src/geo.h 
	$(OBJ)
build/get.o: src/get.c src/geo.h 
	$(OBJ)
build/geo.o: src/geo.c src/geo.h 
	$(OBJ)
build/circle_intersects.o: src/circle_intersects.c src/geo.h 
	$(OBJ)

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin 
