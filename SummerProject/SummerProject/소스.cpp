#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
	
	RenderWindow window(sf::VideoMode(500, 500), "WINDOW");
	//절대 사이즈가 없다.
	//texture의 사이즈를 그대로 가져오기때문에 이를 줄이거나 늘릴수 있음.
	
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