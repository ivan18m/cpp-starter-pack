#include "pch.h"
#include "Core.h"
#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace AppName {

	std::shared_ptr<spdlog::logger> Log::s_Logger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_Logger = spdlog::stdout_color_mt(APP_NAME);
		s_Logger->set_level(spdlog::level::trace);
	}

}