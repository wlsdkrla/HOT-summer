#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
	
	RenderWindow window(sf::VideoMode(500, 500), "WINDOW");
	//���� ����� ����.
	//texture�� ����� �״�� �������⶧���� �̸� ���̰ų� �ø��� ����.
	
	Sprite sp;
	Texture tx;
	tx.loadFromFile("Textures/t.jpg");
	sp.setScale(0.3f, 0.3f);
	sp.setOrigin(tx.getSize().x / 2.f, tx.getSize().y / 2.f);
	sp.setTexture(tx);
	sp.setPosition(250.f,250.f);
	while (window.isOpen()) {
		window.clear();
		window.draw(sp);
		window.display();
	}
}