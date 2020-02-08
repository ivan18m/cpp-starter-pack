#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"


namespace AppName 
{
	/**
	 * Macros enable easy library switch
	 * spdlog shared-pointer implementation
	 */
	class Log
	{
	public:
		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetLogger() { return s_Logger; }
	private:
		static std::shared_ptr<spdlog::logger> s_Logger;
	};
}

// Macros
#define TRACE(...)     ::AppName::Log::GetLogger()->trace(__VA_ARGS__)
#define INFO(...)      ::AppName::Log::GetLogger()->info(__VA_ARGS__)
#define WARN(...)      ::AppName::Log::GetLogger()->warn(__VA_ARGS__)
#define ERROR(...)     ::AppName::Log::GetLogger()->error(__VA_ARGS__)
#define CRITICAL(...)  ::AppName::Log::GetLogger()->critical(__VA_ARGS__)