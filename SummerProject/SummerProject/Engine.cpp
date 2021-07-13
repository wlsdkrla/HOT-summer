﻿#include "framework.h"
#include "Engine.h"
#include "CharactorScene.h"
#include "scoreScene.h"
#include "pacmenScene.h"
#include "BackgroundObject.h"
#include "MapObject.h"
Engine::Engine()
{
	Init();
}

Engine::~Engine()
{
}

void Engine::Init()
{
	// 현재 window 변수는 포인터로 존재한다.

	this->window = new RenderWindow(VideoMode(800, 800), "Window");
	window->setMouseCursorVisible(true);
	this->scenes.push(new MapObject);
	
}

void Engine::Destroy()
{
	// 윈도우가 nullptr이 아니라면
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
			if (!scenes.empty())
			{
				scenes.top()->Input(&evt);
			}

			switch (evt.key.code)
			{
			case Keyboard::A:
			{
				
				this->scenes.push(new CharactorScene);
				cout << "몬스터 화면" << endl;
				break;
			}

			case Keyboard::S:
			{
				
				this->scenes.push(new scoreScene);
				cout << "점수 화면" << endl;
				break;
			}
			case Keyboard::D:
			{
				this->scenes.push(new pacmenScene);
				cout << "팩맨 화면" << endl;
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
}

	// KeyBoardInput
	//if (Keyboard::isKeyPressed(Keyboard::Escape))
	//{
	//	window->close();
	//}

	//// Mouse Input
	//if (Mouse::isButtonPressed(Mouse::Left))
	//{
	//	window->setTitle("Left Click");
	//}
	//else if (Mouse::isButtonPressed(Mouse::Right))
	//{
	//	window->setTitle("Right Click");
	//}
	//else
	//{
	//	window->setTitle("Window");
	//}

void Engine::Update()
{

	deltaTime = timer.getElapsedTime().asSeconds();
	timer.restart();
	Input();
	if (!scenes.empty()) {
		scenes.top()->Update(deltaTime);
		if (this->scenes.top()->GetQuit()) {
			// 현재 실행중인 scene 종료한다.

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

