#include "tmpch.h"
#include "Window.h"

namespace Terminal {
	Window::Window(const float& width, const float& height) : h_window(nullptr), height(0.0f), width(0.0f) {
		h_window = GetConsoleWindow();
		this->width = width;
		this->height = height;
	}
	Window::~Window() {

	}

	HWND Window::GetNativeWindow() {
		return this->h_window;
	}

	const float& Window::GetWindowWidth() {
		return this->width;
	}

	const float& Window::GetWindowHeight() {
		return this->height;
	}
}