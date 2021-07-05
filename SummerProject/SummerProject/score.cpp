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
	for (int i = 1; i < 7; ++i) {
		sprintf(filepath, "Textures/score/score%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->vAnimation.push_back(tx);
	}
}

void score::Destroy()
{
}

void score::Update(const float& deltaTime)
{
}

