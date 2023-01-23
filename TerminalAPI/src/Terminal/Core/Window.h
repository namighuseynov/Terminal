#pragma once 
#include <Windows.h>

namespace Terminal {
	class Window {
	public:
		Window(const float& width, const float& height);
		virtual ~Window();
	public:
		HWND GetNativeWindow();
		const float& GetWindowWidth();
		const float& GetWindowHeight();
	private:
		HWND h_window;
		float width;
		float height;
	};
}