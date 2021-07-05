#pragma once
#include "Charactor.h"
class M1Charactor : public Charactor
{
public:
	M1Charactor();
	virtual ~M1Charactor();

private:

	virtual void Init();

public:

	virtual void Destroy();

	virtual void Update(const float& deltaTime);
};



