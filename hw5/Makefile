CC = gcc
CFLAGS=-g -Wall
TARGET = main
OBJECTS = main.o fun.o nrutil.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^ -lm
  
clean : 
	rm *.o main