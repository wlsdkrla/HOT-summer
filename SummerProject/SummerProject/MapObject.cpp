#include "framework.h"
#include "MapObject.h"
#include "Charactor.h"
#include "BackgroundObject.h"
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
