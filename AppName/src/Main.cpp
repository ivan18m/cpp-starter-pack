#include "pch.h"
#include "AppName/Application.h"
#include "AppName/Log.h"

int main(int argc, char** argv) 
{
    AppName::Log::Init();
    auto app = AppName::CreateApplication();
    app->Run();
    delete app;
    return 0;
} 