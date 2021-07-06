
#include "framework.h"
#include "pacmenScene.h"
#include "pacman.h"

pacmenScene::pacmenScene()
{
	Init();
}

pacmenScene::pacmenScene(stack<Scene*>* scenes)
	:Scene(scenes)
{
	Init();
}

pacmenScene::~pacmenScene()
{
}

void pacmenScene::Init()
{
	vObjects.push_back(new pacman);

}

void pacmenScene::Update(const float& deltaTime)
{
	Scene::Update(deltaTime);
}

void pacmenScene::Render(RenderWindow* window)
{
	Scene::Render(window);
}

