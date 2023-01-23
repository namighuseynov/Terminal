#include "Terminal.h"

struct ApplicationSpecifications {
	
};

class TerminalApplication :
	public Terminal::Application {
public:
public:
private:
};

Terminal::Application* Terminal::CreateApplication() {
	return new Application();
}