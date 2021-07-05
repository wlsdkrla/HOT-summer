#pragma once
#include "Charactor.h"
class score : public Charactor
{
public:
	score();
	virtual ~score();

private:

	virtual void Init();

public:

	virtual void Destroy();

	virtual void Update(const float& deltaTime);
};
