#define _CRT_SECURE_NO_WARNINGS
#include "framework.h"
#include "AnimationObject.h"

AnimationObject::AnimationObject()
{
	Init();
}

AnimationObject::~AnimationObject()
{
}

void AnimationObject::Init()
{
	Texture* tx = nullptr;
	char filepath[50];
	for (int i = 32; i < 36; ++i) {
		sprintf(filepath, "Textures/cookie0020x2/cookie0020x2_00%d.png", i);
		tx = new Texture;
		tx->loadFromFile(filepath);
		this->vAnimation.push_back(tx);
	}
	
}

void AnimationObject::Destroy()
{
}

void AnimationObject::Updata(const float& deltaTime)
{
	elapsedTime += deltaTime;
	if (elapsedTime > 0.2f) {
		setTexture(*vAnimation.data()[keyframe % vAnimation.size()]);
		++keyframe;
		elapsedTime = 0.f;
	}
}
