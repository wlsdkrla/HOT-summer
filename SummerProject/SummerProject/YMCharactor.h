#pragma once
#include "Charactor.h"
class YMCharactor:public Charactor
{
public:
	YMCharactor();
	virtual ~YMCharactor();

private:

	virtual void Init();

public:

	virtual void Destroy();

	virtual void Update(const float& deltaTime);
};

