sandwichShop: driver.o meat.o hamburger.o sandwich.o
	g++ -o sandwichShop driver.o meat.o hamburger.o sandwich.o
driver.o: meat.h hamburger.h sandwich.h 
	g++ -c driver.cpp
meat.o: meat.cpp meat.h sandwich.h
	g++ -c meat.cpp
hamburger.o: hamburger.cpp hamburger.h sandwich.h
	g++ -c hamburger.cpp
sandwich.o: sandwich.cpp sandwich.h
	g++ -c sandwich.cpp
clean:
	rm *.o sandwichShop