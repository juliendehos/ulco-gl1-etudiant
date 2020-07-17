OBJ= imshow.o
BIN= imshow.out
CXXFLAGS= -Wall -Wextra -O2 
LDFLAGS= 
CXX= c++

.PHONY: all clean

all: $(BIN)

%.out: $(OBJ)
	c++ $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean: 
	rm -f $(BIN) $(OBJ)

