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
	for (int i = 1; i < 3; ++i) {
		sprintf(filepath, "Textures/mons/M%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->downAnimation.push_back(tx);
	}

	for (int i = 3; i < 5; ++i) {
		sprintf(filepath, "Textures/mons/M%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->goAnimation.push_back(tx);
	}

	for (int i = 1; i < 7; ++i) {
		sprintf(filepath, "Textures/mons/M%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->upAnimation.push_back(tx);
	}
	stateAnimation[GO] = goAnimation;
	setPosition(Vector2f(120.f, 0.f));
}

void M1Charactor::Destroy()
{
	Charactor::Destroy();
}

void M1Charactor::Update(const float& deltaTime)
{
	state = GO;
	elapsedTime += deltaTime;

	if (elapsedTime > 0.05f)
	{
		//stateAnimation 컨테이너안에 객체 하나씩을 부르는데, 이것을 animation
		for (auto& animation : stateAnimation) {
			//animation - > <state(first),animationVector(second)>

			if (animation.first == state) {
				setTexture(*animation.second.data()[keyFrame % animation.second.size()]);
			}
		}

		++keyFrame;
		elapsedTime = 0.f;
	}
}
