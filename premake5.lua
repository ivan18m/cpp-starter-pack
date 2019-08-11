workspace "AppName"
	architecture "x64"
	startproject "AppName"

	configurations
	{
		"Debug",
		"Release"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}

group "Dependencies"
group ""

project "AppName"
	location "%{prj.name}"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("obj/" .. outputdir .. "/%{prj.name}")

	pchheader "pch.h"
	pchsource "%{prj.name}/src/pch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
	}

	defines
	{
		"_CRT_SECURE_NO_WARNINGS"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
	}

	links 
	{ 

	}
		
    filter "system:Windows"
        system "windows"
        systemversion "latest"
        defines
		{
			"PLATFORM_WINDOWS"
        }

    filter "system:Unix"
        system "linux"
        systemversion "latest"
        defines
		{
			"PLATFORM_LINUX"
        }


    filter "system:Mac"
        system "macosx"
        systemversion "latest"
        defines
		{
			"PLATFORM_MAC"
        }

	filter "configurations:Debug"
		defines "DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "RELEASE"
		runtime "Release"
		optimize "on"
