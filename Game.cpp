#include "Game.hpp"

Game::Game()
	: gameWindow(new sf::RenderWindow()),
	sstack(new SStack(3)) {
	gameWindow->create(sf::VideoMode(800, 480), "Guardian");
}

int Game::run() {
	while(gameWindow->isOpen()) {
		handleInput();	
		update();
		render();
	}
	
	return EXIT_SUCCESS;
}

void Game::handleInput() {
	sf::Event event;

	while(gameWindow->pollEvent(event)) {
		switch(event.type) {
			case sf::Event::Closed:
				gameWindow->close();
				break;
			case sf::Event::KeyPressed:
				switch(event.key.code) {
					case sf::Keyboard::Q:
						sstack->push_back(new PlayState(gameWindow));
						break;
				}
				break;
		}
	}
}

void Game::update() {
	
}

void Game::render() {
	if(sstack->getCurrSize() > 0) {
		sstack->top()->render();
	}
	else {
		gameWindow->clear(sf::Color::Black);
	}
	gameWindow->display();
}
