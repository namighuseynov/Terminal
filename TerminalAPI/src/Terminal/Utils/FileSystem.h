#pragma once
#include <iostream>
#include <filesystem>
#include <string>
#include <fstream>
#include <vector>
#include <list>

namespace fs = std::filesystem;

namespace Terminal {

	class FileSystem final {
	public:
		FileSystem();
		~FileSystem();
	public:
		bool Open(std::string path);
		static std::string GetCurrentPath();
		static std::string FindFile(std::string filename);
		
	private:
		static std::string currentPath;
		std::string path;
		std::ifstream inFile;
	};
	
}
