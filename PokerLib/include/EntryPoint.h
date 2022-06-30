#pragma once

extern PE::Application* PE::CreateApplication();

int main(int argc, char** argv)
{
	printf("Poker Engine!\n");
	PE::Log::Init();

	PE_CORE_TRACE("Core Trace Log!");
	PE_CORE_INFO("Core Info Log!");
	PE_CORE_WARN("Core Warn Log!");
	PE_CORE_ERROR("Core Error Log!");
	
	PE_TRACE("Client Trace Log!");
	PE_INFO("Client Info Log!");
	PE_WARN("Client Warn Log!");
	int a = 5;
	PE_ERROR("Client Error Log! Var={0}", a);

	auto app = PE::CreateApplication();
	app->Run();
	delete app;
}