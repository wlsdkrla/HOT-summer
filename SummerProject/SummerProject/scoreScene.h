#pragma once
#include "framework.h"
#include "scene.h"
class scoreScene: public Scene
{
public:
	scoreScene();
    scoreScene(stack<Scene*>* scenes);
    virtual ~scoreScene();
private:
    virtual void Init();
public:
    virtual void Update(const float& deltaTime);
    virtual void Render(RenderWindow* window);
};

