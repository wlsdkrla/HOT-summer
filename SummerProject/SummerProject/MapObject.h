#pragma once
#include "framework.h"
#include "scene.h"
class MapObject:public Scene
{
public:
	MapObject();
	MapObject(stack <Scene*>* scenes);
	virtual ~MapObject();

private:
	virtual void Init();

public:
	virtual void Input(Event* e);
	virtual void Update(const float& deltaTime);
	virtual void Render(RenderWindow* window);
};


