#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
	RenderWindow window(sf::VideoMode(500, 500), "WINDOW");
	
	//사각형 오브젝트
	//사이즈 100.f,100.f
	//색상은 그린
	//위치는 100.f,100.f
	RectangleShape rs;
	
	//Vector2f = float형 자료형 두개 짜리
	rs.setSize(Vector2f(100.f,100.f));
	rs.setFillColor(Color::Green);
	rs.setPosition(Vector2f(250.f, 250.f));
	
	//오브젝트의 중심을 set하는 함수
	rs.setOrigin(rs.getSize() / 2.f);
	
	while (window.isOpen()) {
		window.clear();
		rs.setPosition(rs.getPosition().x+0.005f, rs.getPosition().y);
		//rs를 윈도우에 그려라.
		
		window.draw(rs);
		//윈도우에 그린 결과물을 출력하라.
		window.display();
	}
}