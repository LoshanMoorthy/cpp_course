CXX = g++

CXXFLAGS = -std=c++17 -Wall

TARGET = program

SRC = Ex5.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

