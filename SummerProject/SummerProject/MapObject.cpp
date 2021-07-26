#include "framework.h"
#include "MapObject.h"
#include "Charactor.h"
#include "pacman.h"
#include "YMCharactor.h"
#include "PMCharactor.h"
#include "BMCharactor.h"
#include "BackgroundObject.h"
// TODO: �� �浹üũ �ϱ�
// �� �����, �� �� �ִ� ���鵵 �ϳ��ϳ� �浹üũ ó�����ֱ�
MapObject::MapObject()
{
	Init();
}

MapObject::MapObject(stack<Scene*>* scenes)
	:Scene(scenes)
{
	Init();
}

MapObject::~MapObject()
{
}

void MapObject::Init()
{
	background = new BackgroundObject("Textures/map/pacmap1.jpg");
	background->setScale(3.f, 3.f);
	
	vObjects.push_back(new pacman);
	vObjects.push_back(new YMCharactor);
	vObjects.push_back(new PMCharactor);
	//vObjects.push_back(new BMCharactor);
}

void MapObject::Input(Event* e)
{
}

void MapObject::Update(const float& deltaTime)
{
	Scene::Update(deltaTime);
}

void MapObject::Render(RenderWindow* window)
{
	Scene::Render(window);
}
