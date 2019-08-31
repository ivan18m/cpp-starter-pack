#include "pch.h"
#include "AppName/Application.h"
#include "AppName/Test.h"

int main(int argc, char** argv) 
{
    AppName::Log::Init(); // Initialize logger
    int result = Catch::Session().run(argc, argv); // Run unit tests

    auto app = AppName::CreateApplication();
    app->Run();

    delete app;
    return result;
} 
