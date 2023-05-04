CC=g++
TARGET1=1
TARGET2=2
TARGET3=3
TARGET4=4
FLAG=-std=c++11

all:	$(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(TARGET4).cpp
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(TARGET4).cpp
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o
	$(CC) $(FLAG) -o $(TARGET3) $(TARGET3).o
	$(CC) $(FLAG) -o $(TARGET4) $(TARGET4).o

clean:	
	rm -r $(TARGET1).o $(TARGET2).o $(TARGET3).o $(TARGET4).o
	rm -r $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4)
