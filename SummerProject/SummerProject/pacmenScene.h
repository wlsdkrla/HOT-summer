#pragma once
#include "framework.h"
#include "scene.h"
class pacmenScene : public Scene
{
public:
    pacmenScene();
    pacmenScene(stack<Scene*>* scenes);
    virtual ~pacmenScene();
private:
    virtual void Init();
public:
    virtual void Update(const float& deltaTime);
    virtual void Render(RenderWindow* window);
};

