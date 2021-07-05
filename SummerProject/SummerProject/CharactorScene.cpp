#include "framework.h"
#include "CharactorScene.h"
#include "M1Charactor.h"
#include "YMCharactor.h"
#include "PMCharactor.h"
#include "BMCharactor.h"

CharactorScene::CharactorScene()
{
	Init();
}

CharactorScene::CharactorScene(stack<Scene*>* scenes)
	:Scene(scenes)
{
	Init();
}

CharactorScene::~CharactorScene()
{
}

void CharactorScene::Init()
{
	
	vObjects.push_back(new M1Charactor);
	vObjects.push_back(new YMCharactor);
	vObjects.push_back(new PMCharactor);
	vObjects.push_back(new BMCharactor);

}

void CharactorScene::Update(const float& deltaTime)
{
	Scene::Update(deltaTime);
}

void CharactorScene::Render(RenderWindow* window)
{
	Scene::Render(window);
}
