#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
	RenderWindow window(sf::VideoMode(500, 500), "WINDOW");
	
	//�簢�� ������Ʈ
	//������ 100.f,100.f
	//������ �׸�
	//��ġ�� 100.f,100.f
	RectangleShape rs;
	
	//Vector2f = float�� �ڷ��� �ΰ� ¥��
	rs.setSize(Vector2f(100.f,100.f));
	rs.setFillColor(Color::Green);
	rs.setPosition(Vector2f(250.f, 250.f));
	
	//������Ʈ�� �߽��� set�ϴ� �Լ�
	rs.setOrigin(rs.getSize() / 2.f);
	
	while (window.isOpen()) {
		window.clear();
		rs.setPosition(rs.getPosition().x+0.005f, rs.getPosition().y);
		//rs�� �����쿡 �׷���.
		
		window.draw(rs);
		//�����쿡 �׸� ������� ����϶�.
		window.display();
	}
}