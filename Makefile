all:
	g++ -o run Main.cpp Game.cpp SStack.cpp -lsfml-system -lsfml-graphics -lsfml-window
