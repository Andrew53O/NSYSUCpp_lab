CC = g++
TARGET1 = 11-1
TARGET1-1 = TwoD
TARGET2 = 11-2
TARGET3 = 11-3
FLAG = -std=c++11

all: $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET1-1).cpp $(TARGET2).cpp $(TARGET3).cpp
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o $(TARGET1-1).o
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o
	$(CC) $(FLAG) -o $(TARGET3) $(TARGET3).o
clean:
	rm -f $(TARGET1).o $(TARGET1-1).o $(TARGET2).o $(TARGET3).o
	rm -f $(TARGET1) $(TARGET2) $(TARGET3)

