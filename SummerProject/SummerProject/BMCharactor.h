#pragma once
#include "Charactor.h"
class BMCharactor :public Charactor
{
public:
	BMCharactor();
	virtual ~BMCharactor();

private:

	virtual void Init();

public:

	virtual void Destroy();

	virtual void Update(const float& deltaTime);
};

