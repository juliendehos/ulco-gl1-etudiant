CXX = c++

all:
	$(CXX) main.cpp
	(./a.out 4 && echo ok) || echo ko
	(./a.out -2 && echo ok) || echo ko
	(./a.out toto && echo ok) || echo ko

clean:
	rm -f a.out

