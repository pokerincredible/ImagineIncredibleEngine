#include "Application.h"
#include "ApplicationEvent.h"
#include "Log.h"

namespace PE {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
        WindowResizeEvent e(1270, 720);
        if (e.IsInCategory(EventCategoryApplication))
        {
            PE_INFO(e);
        }
        if (e.IsInCategory(EventCategoryInput))
        {
            PE_INFO(e);
        }

		while (true);
	}
}