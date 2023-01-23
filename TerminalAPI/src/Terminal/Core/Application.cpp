#include "tmpch.h"
#include "Application.h"
#include "Terminal/Utils/Ñonfigurator.h"
#include "Terminal/Utils/FileSystem.h"



namespace Terminal {
	Application::Application() {
		this->isRunning = true;
		this->instance = this;
		this->hWindow = new Window(800, 500);
		this->console = new Console(200, 200);

	}
	Application::~Application() {
		delete this->console;
		delete this->hWindow;
	} 
	Application& Application::GetApplication() {
		return *instance;
	}
	const Console& Application::GetConsole() {
		return *this->console;
	}
	const Window& Application::GetWindow() {
		return *this->hWindow;
	}
	void Application::Run() {
		std::cout << FileSystem::GetCurrentPath() << std::endl;
		system("clip /");
		system("pause");
		//while (Application::isRunning) {
			//std::cout << "." << std::endl;
		//}
	}
	void Application::Close() {
		isRunning = false;
	}
}