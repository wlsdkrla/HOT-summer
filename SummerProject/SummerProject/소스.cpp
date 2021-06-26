#define _CRT_SECURE_NO_WARNINGS
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace sf;

using namespace std;
int main() {

	RenderWindow window(sf::VideoMode(500, 500), "WINDOW");
	window.setFramerateLimit(300);

	vector<Texture>txVector;
	Texture tx;
	char name[50];
	for (int i = 1; i < 7; ++i) {
		sprintf(name, "Textures/pacman/%d.jpg", i);
		tx.loadFromFile(name);
		txVector.push_back(tx);
	}
	Sprite sp;
	Clock clock;
	size_t keyFrameTime = 0;
	while (window.isOpen()) {
		window.clear();

		Event e;

		while (window.pollEvent(e)) {
			switch (e.type)
			{
			case Event::Closed: {
				window.close();
				break;
			}
			default:
				break;
			}
		}
	

	
		if (clock.getElapsedTime().asSeconds() > 0.5f) {

			sp.setTexture(txVector.data()[keyFrameTime % txVector.size()]);
			++keyFrameTime;
			clock.restart();
		}

		window.draw(sp);

		window.display();
	}
}