#pragma once

#ifdef FE_PLATFORM_WINDOWS

extern FE::Application* FE::CreateApplication();

int main(int argc, char** argv)
{
	printf("Imagine Incredible Engine!\n");
	FE::Log::Init();

	FE_CORE_TRACE("Core Trace Log!");
	FE_CORE_INFO("Core Info Log!");
	FE_CORE_WARN("Core Warn Log!");
	FE_CORE_ERROR("Core Error Log!");
	
	FE_TRACE("Client Trace Log!");
	FE_INFO("Client Info Log!");
	FE_WARN("Client Warn Log!");
	int a = 5;
	FE_ERROR("Client Error Log! Var={0}", a);

	auto app = FE::CreateApplication();
	app->Run();
	delete app;
}


#endif // II_PLATFORM_WINDOWS
