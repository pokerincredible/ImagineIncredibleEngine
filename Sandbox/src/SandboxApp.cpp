#include <ImagineIncredible.h>

class Sandbox : public Imagine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Imagine::Application* Imagine::CreateApplication()
{
	return new Sandbox();
}