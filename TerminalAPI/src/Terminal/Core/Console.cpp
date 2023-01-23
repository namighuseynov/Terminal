#include "tmpch.h"
#include "Console.h"

namespace Terminal {
	Console::Console(float width, float height) : width(0.0f), height(0.0f) {
		this->consoleWindow = GetConsoleWindow();
		MoveWindow(consoleWindow, 200, 200, width, height, TRUE); 
	}
	Console::~Console() {

	}
	float Console::GetWindowHeight() {
		return this->height;
	}
	float Console::GetWindowWidth() {
		return this->width;
	}
}
