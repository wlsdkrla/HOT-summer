#include "Charactor.h"
#include "scene.h"
enum CHARACTOR_STATE {
	//IDEL
	STOP,
	UP,
	DOWN,
	RIGHT,
	LEFT
};
class pacman :public Charactor
{
public:
	pacman();
	virtual ~pacman();

private:
	vector<Texture*> stopAnimation;
	vector<Texture*> rightAnimation;
	vector<Texture*> leftAnimation;
	vector<Texture*> downAnimation;
	vector<Texture*> upAnimation;
	int state = STOP;
	map<int, vector<Texture*>>stateAnimation;
private:

	virtual void Init();

public:

	virtual void Destroy();

	virtual void Update(const float& deltaTime);
};

