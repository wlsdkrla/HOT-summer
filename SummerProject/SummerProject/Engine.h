#pragma once
//전방선언
class AnimationObject;

class Engine final {
public://생성자. 소멸자
	Engine();
	~Engine();

private://멤버변수
	RenderWindow* window = nullptr;
	Event evt;
	
	Clock timer;
	float deltaTime = 0.f;

	AnimationObject* obj = nullptr;

private://메소드

	// 엔진을 초기화 하는 함수
	void Init();

	//윈도우상의 입력값을 처리한다.
	void Input();
	
	// 현재 살아있는 오브젝트를 업데이트 한다.
	void Update();
public:
	// 윈도우에 결과물을 출력한다
	void Render();
	
	// 엔진이 없어지기 전에 호출되는 함수
	void Destroy();
};