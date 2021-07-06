#include "framework.h"
#include "YMCharactor.h"

YMCharactor::YMCharactor()
{
	Init();
}

YMCharactor::~YMCharactor()
{
}
void YMCharactor::Init()
{
	Texture* tx = nullptr;
	char filepath[50];
	for (int i = 1; i < 7; ++i) {
		sprintf(filepath, "Textures/mons2/YM%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->vAnimation.push_back(tx);
	}
	setPosition(Vector2f(240.f, 0.f));
}

void YMCharactor::Destroy()
{
}

void YMCharactor::Update(const float& deltaTime)
{
	Charactor::Update(deltaTime);
}