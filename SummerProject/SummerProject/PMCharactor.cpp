#include "framework.h"
#include "PMCharactor.h"

PMCharactor::PMCharactor()
{
	Init();
}

PMCharactor::~PMCharactor()
{
}
void PMCharactor::Init()
{
	Texture* tx = nullptr;
	char filepath[50];
	for (int i = 1; i < 7; ++i) {
		sprintf(filepath, "Textures/mons3/PM%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->vAnimation.push_back(tx);
	}
	setPosition(Vector2f(360.f, 0.f));
}

void PMCharactor::Destroy()
{
}

void PMCharactor::Update(const float& deltaTime)
{
	Charactor::Update(deltaTime);
}

