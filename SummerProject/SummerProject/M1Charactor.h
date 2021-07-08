#pragma once
#include "Charactor.h"
enum CHARACTOR_STATE {
	//IDEL
	GO,
	UP,
	DOWN
};
class M1Charactor : public Charactor
{
public:
	M1Charactor();
	virtual ~M1Charactor();
private:
	vector<Texture*> goAnimation;
	vector<Texture*> downAnimation;
	vector<Texture*> upAnimation;



	// 포인터 선언 이유 그때그때 동적할당 하기 위해서.
	int state = GO;
	map<int, vector<Texture*>>stateAnimation;

private:

	virtual void Init();

public:

	virtual void Destroy();

	virtual void Update(const float& deltaTime);
};



