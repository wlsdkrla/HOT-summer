#include "framework.h"
#include "score.h"

score::score()
{
	Init();
}

score::~score()
{
}
void score::Init()
{
	Texture* tx = nullptr;
	char filepath[50];
	for (int i = 1; i < 8; ++i) {
		sprintf(filepath, "Textures/score/score%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->vAnimation.push_back(tx);
	}
	setPosition(Vector2f(0.f, 120.f));
}

void score::Destroy()
{
	Charactor::Destroy();
}

void score::Update(const float& deltaTime)
{
	Charactor::Update(deltaTime);
}

