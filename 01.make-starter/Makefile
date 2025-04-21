CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LDFLAGS =

SRC_DIR = src
TEST_DIR = test
TARGET = output/bin/app
TEST_TARGET = output/bin/test_runner

SRC = $(wildcard $(SRC_DIR)/*.c)
SRC_NOMAIN = $(filter-out $(SRC_DIR)/main.c, $(SRC))
TEST_SRC = $(wildcard $(TEST_DIR)/*.c)

all: build

build:
	mkdir -p output/bin
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

debugbuild:
	mkdir -p output/bin
	$(CC) $(CFLAGS) -g $(SRC) -o $(TARGET)

debug-test:
	mkdir -p output/bin
	$(CC) $(CFLAGS) -g $(TEST_SRC) $(SRC_NOMAIN) -o $(TEST_TARGET) -lcunit

run-test: debug-test
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
