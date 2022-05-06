#pragma once

#ifdef II_PLATFORM_WINDOWS

extern Imagine::Application* Imagine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Imagine Incredible Engine!\n");
	auto app = Imagine::CreateApplication();
	app->Run();
	delete app;
}


#endif // II_PLATFORM_WINDOWS
