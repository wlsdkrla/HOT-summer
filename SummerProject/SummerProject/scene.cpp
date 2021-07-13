#include "framework.h"
#include "scene.h"
#include "Object.h"

Scene::Scene()
{
	Init();
}

Scene::Scene(stack<Scene*>* scenes)
	:scenes(scenes)
{
	Init();
}

Scene::~Scene()
{
}

void Scene::Init()
{

}

bool Scene::GetQuit() const
{
	return quit;
}

void Scene::EndScene()
{
	quit = true;
}

void Scene::Input(Event* e)
{
}

void Scene::Update(const float& deltaTime)
{


	for (auto& obj : vObjects)
	{
		obj->Update(deltaTime);
	}

}

void Scene::Render(RenderWindow* window)
{
	if (background) {
		window->draw(*background);
	}
	for (auto& obj : vObjects)
	{
		window->draw(*obj);
	}
}
