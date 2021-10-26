all: p1 p2 p3 p4 p5

p1: Box.h Box.cpp testbox.cpp
	g++ -Wall -o p1 Box.h Box.cpp testbox.cpp

p2: a11_p2.cpp
	g++ -Wall -o p2 a11_p2.cpp

p3: cd a11_p3 && echo "In question 3" && \
	g++ -Wall -o p3 Creature.h Creature.cpp testcreature.cpp

p4: cd a11_p4 && echo "In question 4" && \
	g++ -Wall -o p4 Creature.h Creature.cpp dyncreature.cpp

p5: cd a11_p5 && echo "In question 5" && \
	g++ -Wall -o p5 Shapes.h Shapes.cpp testshapes.cpp
