#include "SStack.hpp"

class Game {
	public:
		Game();
		int run();
		void handleInput();
		void update();
		void render();
	private:
		sf::RenderWindow* gameWindow;
		SStack* sstack;
};
