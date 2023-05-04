CC = g++
TARGET1 = 12-1
TARGET2 = 12-2
TARGET3 = 12-3
HEADER1 = Pokemon
HEADER1-1 = fire
HEADER1-2 = water
HEADER1-3 = grass
FLAG = -std=c++11

all: $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(HEADER1).cpp $(HEADER1-1).cpp $(HEADER1-2).cpp $(HEADER1-3).cpp
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o $(HEADER1).o $(HEADER1-1).o $(HEADER1-2).o $(HEADER1-3).o
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o $(HEADER1).o $(HEADER1-1).o $(HEADER1-2).o $(HEADER1-3).o
	$(CC) $(FLAG) -o $(TARGET3) $(TARGET3).o

clean:
	rm -f $(TARGET1) $(TARGET2) $(TARGET3)
	rm -f $(TARGET1).o $(TARGET2).o $(TARGET3).o $(HEADER1).o $(HEADER1-1).o $(HEADER1-2).o $(HEADER1-3).o
