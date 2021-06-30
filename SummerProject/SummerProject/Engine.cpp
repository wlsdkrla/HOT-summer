#include "framework.h"
#include "Engine.h"
#include "AnimationObject.h"

Engine::Engine()
{
	Init();
}

Engine::~Engine()
{
}

void Engine::Init()
{
	// 현재 window 변수는 
	this->window = new RenderWindow(VideoMode(500, 500), "WINDOW");
	window->setMouseCursorVisible(true);
	Image icon;
	icon.loadFromFile("Textures/icon.png");
	window->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
}

void Engine::Destroy()
{
	// 윈도우가 null이 아니라면
	if (window) {
		delete window;
	}
}

void Engine::Input()
{
	while (window->pollEvent(evt)) {
		switch (evt.type) {

		case Event::Closed: {
			window->close();
			break;
		}
		default:
			break;
		}
	}
	
}

void Engine::Update()
{
	/*timer.restart();
	deltaTime = timer.getElapsedTime().asSeconds();
	cout << deltaTime << endl;*/
	Input();
}

void Engine::Render()
{
	while (window->isOpen()) {
		window->clear();
		Update();
		window->display();
	}
}
