#pragma once

#include "Core.h"

namespace Imagine {

	class II_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}



