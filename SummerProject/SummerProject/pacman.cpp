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
	for (int i = 5; i < 6; ++i) {
		sprintf(filepath, "Textures/pacman/%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->stopAnimation.push_back(tx);
	}
	for (int i = 7; i < 10; ++i) {
		sprintf(filepath, "Textures/pacman/%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->downAnimation.push_back(tx);
		
	}
	for (int i = 13; i < 16; ++i) {
		sprintf(filepath, "Textures/pacman/%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->upAnimation.push_back(tx);
	}
	for (int i = 4; i < 7; ++i) {
		sprintf(filepath, "Textures/pacman/%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->rightAnimation.push_back(tx);
	}
	for (int i = 10; i < 13; ++i) {
		sprintf(filepath, "Textures/pacman/%d.jpg", i);

		tx = new Texture;
		tx->loadFromFile(filepath);
		this->leftAnimation.push_back(tx);
	}
	stateAnimation[DOWN] = downAnimation;
	stateAnimation[STOP] = stopAnimation;
	stateAnimation[UP] = upAnimation;
	stateAnimation[RIGHT] = rightAnimation;
	stateAnimation[LEFT] = leftAnimation;
}

void pacman::Destroy()
{
}

void pacman::Update(const float& deltaTime)
{
	state = STOP;
	
	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		state = RIGHT;
		
	}
	else if (Keyboard::isKeyPressed(Keyboard::Left)) {
		state = LEFT;
	}
	else if (Keyboard::isKeyPressed(Keyboard::Up)) {
		state = UP;
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down)) {
		state = DOWN;
	}
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
