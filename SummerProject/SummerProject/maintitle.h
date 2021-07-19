#include "framework.h"
#include "scene.h"
class maintitle : public Scene
{
public:
    maintitle();
    maintitle(stack<Scene*>* scenes);
    virtual ~maintitle();
private:
    virtual void Init();

private:/* ¸É¹ö º¯¼ö */

    RenderWindow* window = nullptr;
    Event evt;

    Clock timer;
    float deltaTime = 0.f;

    stack<Scene*> scenes;
public:

    virtual void Input(Event* e);
    virtual void Update(const float& deltaTime);
    virtual void Render(RenderWindow* window);
};

