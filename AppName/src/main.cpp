#include "pch.h"
#include "Core.h"
#include "AppName/Log.h"

int main(int argc, char** argv) 
{
    AppName::Log::Init();
	INFO("Starting application{0}", "...");
    while(true) 
    {
        
    }
    return 0;
} 
