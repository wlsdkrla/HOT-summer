#include "framework.h"
#include "pacman.h"

pacman::pacman()
{
	Init();
}

pacman::~pacman()
{
}
void pacman::Init()
{
	Texture* tx = nullptr;
	char filepath[50];
	for (int i = 1; i < 7; ++i) {
		sprintf(filepath, "Textures/pacman/%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->vAnimation.push_back(tx);
	}

}

void pacman::Destroy()
{
}

void pacman::Update(const float& deltaTime)
{
	Charactor::Update(deltaTime);
}
