#include <iostream>

class PlayState : public State {
	public:
	PlayState(sf::RenderWindow* win) {
		window = win;
		std::cout << "Created playstate" << std::endl;
	}
	
	int handleInput() {
	}

	void update() {
	}

	void render() {
		window->clear(sf::Color::White);
	}
};
