FLAGS := -std=99
BIN_DIR := ./bin
BUILD_DIR := ./build
SRC_DIR := ./src
CC := g++ -no-pie -Wall -Werror
.PHONY: clean

all: $(BIN_DIR)/geo

$(BIN_DIR)/geo: $(BUILD_DIR)/geo.o $(BUILD_DIR)/areCollinear.o $(BUILD_DIR)/circle_intersects.o $(BUILD_DIR)/get.o $(BUILD_DIR)/perecech.o $(BUILD_DIR)/print.o $(BUILD_DIR)/projectionsIntersect.o $(BUILD_DIR)/proverka.o
	$(CC) $(BUILD_DIR)/geo.o $(BUILD_DIR)/areCollinear.o $(BUILD_DIR)/circle_intersects.o $(BUILD_DIR)/get.o $(BUILD_DIR)/perecech.o $(BUILD_DIR)/print.o $(BUILD_DIR)/projectionsIntersect.o $(BUILD_DIR)/proverka.o -o $(BIN_DIR)/geo -lm $(FLAG)

$(BUILD_DIR)/geo.o: $(SRC_DIR)/geo.c
	$(CC) -c $(SRC_DIR)/geo.c -o $(BUILD_DIR)/geo.o $(FLAG)

$(BUILD_DIR)/areCollinear.o: $(SRC_DIR)/areCollinear.c
	$(CC) -c $(SRC_DIR)/areCollinear.c -o $(BUILD_DIR)/areCollinear.o $(FLAG)

$(BUILD_DIR)/circle_intersects.o: $(SRC_DIR)/circle_intersects.c
	$(CC) -c $(SRC_DIR)/circle_intersects.c -o $(BUILD_DIR)/circle_intersects.o $(FLAG)

$(BUILD_DIR)/get.o: $(SRC_DIR)/get.c
	$(CC) -c $(SRC_DIR)/get.c -o $(BUILD_DIR)/get.o $(FLAG)

$(BUILD_DIR)/perecech.o: $(SRC_DIR)/perecech.c
	$(CC) -c $(SRC_DIR)/perecech.c -o $(BUILD_DIR)/perecech.o $(FLAG)

$(BUILD_DIR)/print.o: $(SRC_DIR)/print.c
	$(CC) -c $(SRC_DIR)/print.c -o $(BUILD_DIR)/print.o $(FLAG)

$(BUILD_DIR)/projectionsIntersect.o: $(SRC_DIR)/projectionsIntersect.c
	$(CC) -c $(SRC_DIR)/projectionsIntersect.c -o $(BUILD_DIR)/projectionsIntersect.o $(FLAG)

$(BUILD_DIR)/proverka.o: $(SRC_DIR)/proverka.c
	$(CC) -c $(SRC_DIR)/proverka.c -o $(BUILD_DIR)/proverka.o $(FLAG)

clean:
	rm -rf $(BIN_DIR)/geo
	rm -rf $(BUILD_DIR)/*.o
