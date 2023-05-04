CC = g++
FLAG = -std=c++11
TARGET1 = 1
TARGET2 = 2
TARGET3 = 3
CHEADER3 = TwoD
TARGET4 = 4
HEADER4 = newuser
CHEADER4 = newuser

ALL:	$(TARGET1).cpp
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(CHEADER3).cpp $(TARGET4).cpp $(CHEADER4).cpp 
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o
	$(CC) $(FLAG) -o $(TARGET3) $(TARGET3).o $(CHEADER3).o
	$(CC) $(FLAG) -o $(TARGET4) $(TARGET4).o $(CHEADER4).o

clean:	
	rm -r $(TARGET1).o $(TARGET2).o  $(TARGET3).o $(CHEADER3).o $(TARGET4).o $(CHEADER4).o 
	rm -r $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4)
