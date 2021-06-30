#pragma once
//���漱��
class AnimationObject;

class Engine final {
public://������. �Ҹ���
	Engine();
	~Engine();

private://�������
	RenderWindow* window = nullptr;
	Event evt;
	
	Clock timer;
	float deltaTime = 0.f;

	AnimationObject* obj = nullptr;

private://�޼ҵ�

	// ������ �ʱ�ȭ �ϴ� �Լ�
	void Init();

	//��������� �Է°��� ó���Ѵ�.
	void Input();
	
	// ���� ����ִ� ������Ʈ�� ������Ʈ �Ѵ�.
	void Update();
public:
	// �����쿡 ������� ����Ѵ�
	void Render();
	
	// ������ �������� ���� ȣ��Ǵ� �Լ�
	void Destroy();
};