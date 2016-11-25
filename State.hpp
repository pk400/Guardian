#include <SFML/Graphics.hpp>

class State {
	public:
		virtual int handleInput() = 0;
		virtual void update() = 0;
		virtual void render() = 0;
		sf::RenderWindow* window;
};
