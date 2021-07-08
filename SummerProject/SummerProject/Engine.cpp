#include "framework.h"
#include "Engine.h"
#include "CharactorScene.h"
#include "scoreScene.h"
#include "pacmenScene.h"

Engine::Engine()
{
	Init();
}

Engine::~Engine()
{
}

void Engine::Init()
{
	// ���� window ������ �����ͷ� �����Ѵ�.

	this->window = new RenderWindow(VideoMode(500, 500), "Window");
	window->setMouseCursorVisible(true);
	//Sprite sp;
	/*Texture tx;
	tx.loadFromFile("Textures/map/pacmap1.jpg");
	sp.setTexture(tx);
	sp.setPosition(0.f, 0.f);
	sp.setOrigin(tx.getSize().x / 2.f, tx.getSize().y / 2.f);*/
	
	//�ƹ��͵� ���� ���
	this->scenes.push(new Scene);



}

void Engine::Destroy()
{
	// �����찡 nullptr�� �ƴ϶��
	if (window)
	{
		delete window;
	}


}

void Engine::Input()
{
	while (window->pollEvent(evt))
	{
		switch (evt.type)
		{
		case Event::Closed:
		{
			window->close();
			break;
		}
		case Event::KeyPressed:
		{
			switch (evt.key.code)
			{
			case Keyboard::A:
			{
				this->scenes.push(new CharactorScene);
				cout << "���� ȭ��" << endl;
				break;
			}
		
			case Keyboard::S:
			{
				this->scenes.push(new scoreScene);
				cout << "���� ȭ��" << endl;
				break;
			}
			case Keyboard::D:
			{
				this->scenes.push(new pacmenScene);
				cout << "�Ѹ� ȭ��" << endl;
				break;
			}
			case Keyboard::Q: {
				scenes.top()->EndScene();
				break;
			}
			default:
				break;
			}
		}

		default:
			break;
		}
	}

	// KeyBoardInput
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		window->close();
	}

	// Mouse Input
	if (Mouse::isButtonPressed(Mouse::Left))
	{
		window->setTitle("Left Click");
	}
	else if (Mouse::isButtonPressed(Mouse::Right))
	{
		window->setTitle("Right Click");
	}
	else
	{
		window->setTitle("Window");
	}
}

void Engine::Update()
{

	deltaTime = timer.getElapsedTime().asSeconds();
	timer.restart();
	Input();
	if (!scenes.empty()) {
		scenes.top()->Update(deltaTime);
		if (this->scenes.top()->GetQuit()) {
			// ���� �������� scene �����Ѵ�.

			delete this->scenes.top();
			this->scenes.pop();
			cout << "Pop Scene\n" << endl;
		}
	}
	else {
		window->close();
	}
}

void Engine::Render()
{
	while (window->isOpen())
	{
		window->clear();
		Update();

		if (!scenes.empty()) {
			scenes.top()->Render(window);
		}


		window->display();
	}
	
}

