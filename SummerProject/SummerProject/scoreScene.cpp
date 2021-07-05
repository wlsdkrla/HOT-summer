#include "framework.h"
#include "scoreScene.h"
#include "score.h"

scoreScene::scoreScene()
{
	Init();
}

scoreScene::scoreScene(stack<Scene*>* scenes)
	:Scene(scenes)
{
	Init();
}

scoreScene::~scoreScene()
{
}

void scoreScene::Init()
{
	vObjects.push_back(new score);

}

void scoreScene::Update(const float& deltaTime)
{
	Scene::Update(deltaTime);
}

void scoreScene::Render(RenderWindow* window)
{
	Scene::Render(window);
}

