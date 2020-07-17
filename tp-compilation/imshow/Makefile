OBJ= imshow.o
BIN= imshow.out
CXXFLAGS= -Wall -Wextra -O2 
LDFLAGS= 
CXX= c++

.PHONY: all clean

all: $(BIN)

%.out: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean: 
	rm -f $(BIN) $(OBJ)

