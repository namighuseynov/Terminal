#pragma once
#include <Windows.h>

namespace Terminal {
	class Console final {
	public:
		Console(float width, float height);
		~Console();
	public:
		float GetWindowHeight();
		float GetWindowWidth();
	private:
		float width;
		float height;
		//Layer layer;
		HWND consoleWindow;
	};
}
