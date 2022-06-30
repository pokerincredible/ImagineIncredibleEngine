#pragma once

#include "Core.h"

namespace PE {

	class PE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}



