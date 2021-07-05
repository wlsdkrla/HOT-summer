#include "framework.h"
#include "Charactor.h"

Charactor::Charactor()
{
	Init();
}

Charactor::~Charactor()
{
}

void Charactor::Init()
{
	
}

void Charactor::Destroy()
{
	AnimationObject::Destroy();
}

void Charactor::Update(const float& deltaTime)
{
	AnimationObject::Update(deltaTime);
}

