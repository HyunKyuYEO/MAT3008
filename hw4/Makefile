CC = gcc
CFLAGS=-g -Wall
TARGET = main
OBJECTS = main.o muller.o part1.o rtbis.o rtflsp.o rtnewt.o rtsafe.o rtsec.o zbrak.o function.o part2.o part3.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^ -lm
  
clean : 
	rm *.o main