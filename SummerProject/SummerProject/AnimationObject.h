#pragma once
#include "Object.h"
class AnimationObject : public Object
{
public:
	AnimationObject();
	virtual ~AnimationObject();
private:
	vector<Texture*> vAnimation;
	
	size_t keyframe = 0;
	float elapsedTime;
private:
	virtual void Init() = 0;

public:

	virtual void Destroy() = 0;
	virtual void Updata(const float& deltaTime) = 0;
};

