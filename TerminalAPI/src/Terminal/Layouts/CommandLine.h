#pragma once
#include <string>

class CommandLine final {
public:
	CommandLine();
	~CommandLine();
public:
	int Listen();
private:
	std::string line;
};