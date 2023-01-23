#pragma once
#include "Console.h"
#include "Window.h"

namespace Terminal {
	class Application {
	public:
		Application();
		virtual ~Application();
	public:
		void Run();
		void Close();
		Application& GetApplication();
		const Console& GetConsole();
		const Window& GetWindow();
	private:
		Application* instance;
		Window* hWindow;
		Console* console;
		bool isRunning;
	};
	extern Application* CreateApplication();
}
