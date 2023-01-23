#pragma once
#include "Core.h"

#ifdef TERMINAL_PLATFORM_WINDOWS
int main() {
	auto app = Terminal::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif