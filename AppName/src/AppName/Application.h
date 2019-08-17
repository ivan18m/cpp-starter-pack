#pragma once

#include "Core.h"

namespace AppName 
{
	class Application
	{
	public:
		Application();
		virtual ~Application() = default;

		void Run();
	private:
		bool OnClose();
	private:
		static Application* s_Instance;
		bool m_Running = true;
	};
	
	Application* CreateApplication();
}