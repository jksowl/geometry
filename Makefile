CFLAGS= -Wall -Werror
OBJ= g++ $(CFLAGS) -c $< -o $@
.PHONY: clean

all: target1 target2 bin/geo.exe
		
target1:
	mkdir -p build
		
target2:
	mkdir -p bin 

bin/geo.exe: build/areCollinear.o build/proverka.o build/projectionsIntersec.o build/print.o build/perecech.o build/get.o build/geo.o build/circle_intersects.o

build/areCollinear.o:src/areCollinear.c src/geo.h
	$(OBG)
build/proverka.o:src/proverka.c scr/geo.h
	$(OBG)
build/projectionsIntersec.o: src/projectionsIntersec.c src/geo.h 
	$(OBG)
build/print.o:src/print.c src/geo.h 
	$(OBG)
build/perecech.o: src/perecech..c src/geo.h 
	$(OBG)
build/get.o: src/get.c src/geo.h 
	$(OBG)
build/geo.o:src/geo.c src/geo.h 
	$(OBG)
build/circle_intersects.o:src/circle_intersects.c src/geo.h 
	$(OBG)

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin 
