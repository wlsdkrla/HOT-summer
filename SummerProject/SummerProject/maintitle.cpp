#include "framework.h"
#include "maintitle.h"
#include "Charactor.h"
#include "pacman.h"
#include "YMCharactor.h"
#include "PMCharactor.h"
#include "BMCharactor.h"
#include "BackgroundObject.h"
#include "MapObject.h"
//TODO: 맵 타이틀에서 엔터 누르면 바로 게임 시작하게 씬 연결하기
//타이틀 사진 가운데 엔터 키 문구 생성
maintitle::maintitle()
{
	Init();
}

maintitle::maintitle(stack<Scene*>* scenes)
	:Scene(scenes)
{
	Init();
}

maintitle::~maintitle()
{
}

void maintitle::Init()
{
	background = new BackgroundObject("Textures/Title.png");
	background->setScale(5.f, 5.f);

	/*vObjects.push_back(new BackgroundObject("Textures/Title.png"));
	background->setScale(3.f, 3.f);*/
}

void maintitle::Input(Event* e)
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
			case Keyboard::Space:
			{

				this->scenes.push(new MapObject);
				
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

	/*switch (e->key.code)
	{
	case Keyboard::Space:
	{

		this->scenes.push(new MapObject);
		break;
	}
	default:
		break;
	}		*/
		
	/*switch (e->key.code)
	{
	case Keyboard::Space:
	{
		this->scenes->push(new MapObject);
		
		break;
	}
	}*/
}

void maintitle::Update(const float& deltaTime)
{
	//static float elapsedTime = 0.f;

	//static float txtScale = 1.f;

	//static int frame = 0;

	//static int div = 1;

	//if ((elapsedTime += deltaTime) >= 0.01f)
	//{

	//	if ((++frame % 30) == 0)
	//	{
	//		div *= -1;
	//	}

	//	txtScale += (0.01f * div);
	//	/*mTexts["TEST"]->setScale(Vector2f(txtScale, txtScale));*/
	//	elapsedTime = 0.f;
	//}

	Scene::Update(deltaTime);
}

void maintitle::Render(RenderWindow* window)
{
	Scene::Render(window);
}
