#include "Charactor.h"
class pacman :public Charactor
{
public:
	pacman();
	virtual ~pacman();

private:

	virtual void Init();

public:

	virtual void Destroy();

	virtual void Update(const float& deltaTime);
};

