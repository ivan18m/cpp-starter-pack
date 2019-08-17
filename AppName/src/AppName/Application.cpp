#include "pch.h"
#include "Application.h"
#include "AppName/Log.h"

namespace AppName 
{

	Application* Application::s_Instance = nullptr;

	Application::Application()
	{
		ASSERT(!s_Instance, "Application already exists!");
		s_Instance = this;
	}


	void Application::Run()
	{
		INFO("Application initialized");
		while (m_Running)
		{
        }
	}

	bool Application::OnClose()
	{
		m_Running = false;
		return true;
	}

}

AppName::Application* AppName::CreateApplication()
{
    return new AppName::Application();
}