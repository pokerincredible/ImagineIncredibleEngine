#include <PokerEngine.h>

class Sandbox : public PE::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

PE::Application* PE::CreateApplication()
{
	return new Sandbox();
}