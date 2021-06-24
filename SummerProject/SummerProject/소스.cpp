#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
	
	RenderWindow window(sf::VideoMode(500, 500), "WINDOW");
	window.setFramerateLimit(60);
	
	IntRect txSq(0,0,319/3,424/4);
	//319 x 424
	Texture tx;
	tx.loadFromFile("Textures/dragonFrames.png");
	
	Sprite sp(tx,txSq);
	sp.setTexture(tx);
	sp.setScale(3.f, 3.f);
	
	Clock clock;
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

		if (clock.getElapsedTime().asSeconds() >= 0.3f) {
			if (txSq.left >= 212) {
				txSq.left = 0;
			}
			else {
				txSq.left += 318 / 3;
			}
			sp.setTextureRect(txSq); // texture �� �ҷ��Ծ�
			clock.restart();
		}

		window.draw(sp);
		window.display();
	}
}