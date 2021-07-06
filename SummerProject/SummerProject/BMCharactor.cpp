#include "framework.h"
#include "BMCharactor.h"
BMCharactor::BMCharactor()
{
	Init();
}

BMCharactor::~BMCharactor()
{
}
void BMCharactor::Init()
{
	Texture* tx = nullptr;
	char filepath[50];
	for (int i = 1; i < 7; ++i) {
		sprintf(filepath, "Textures/mons4/BM%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->vAnimation.push_back(tx);
	}
	
}

void BMCharactor::Destroy()
{
}

void BMCharactor::Update(const float& deltaTime)
{
	Charactor::Update(deltaTime);
}

