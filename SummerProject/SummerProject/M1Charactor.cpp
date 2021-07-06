#include "framework.h"
#include "M1Charactor.h"

M1Charactor::M1Charactor()
{
	Init();
}

M1Charactor::~M1Charactor()
{
}

void M1Charactor::Init()
{
	Texture* tx = nullptr;
	char filepath[50];
	for (int i = 1; i < 7; ++i) {
		sprintf(filepath, "Textures/mons/M%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->vAnimation.push_back(tx);
	}
	setPosition(Vector2f(120.f, 0.f));
}

void M1Charactor::Destroy()
{
	Charactor::Destroy();
}

void M1Charactor::Update(const float& deltaTime)
{
	Charactor::Update(deltaTime);
}
