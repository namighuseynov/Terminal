#pragma once

#include "CommandLine.h"

class CommandLineHandler final {
public:
	CommandLineHandler();
	~CommandLineHandler();
public:
	int DetectCommand();
	int DetectFlag();
	const CommandLine& GetCommandLine() { return this->commandLine; }
private:
	CommandLine commandLine;
};