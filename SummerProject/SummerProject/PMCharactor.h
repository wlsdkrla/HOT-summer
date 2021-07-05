#pragma once
#include "Charactor.h"
class PMCharactor :public Charactor
{
public:
	PMCharactor();
	virtual ~PMCharactor();

private:

	virtual void Init();

public:

	virtual void Destroy();

	virtual void Update(const float& deltaTime);
};


