#include "tmpch.h"
#include "FileSystem.h"

namespace Terminal {
	std::string FileSystem::currentPath = "";
	FileSystem::FileSystem() {

	}
	FileSystem::~FileSystem() {
		if (this->inFile) {
			inFile.close();
		}
	}

	std::string FileSystem::GetCurrentPath() {
		if (currentPath.length() == 0) {


			char buffer[MAX_PATH + 1];
			int count = ::GetModuleFileNameA(NULL, buffer, MAX_PATH);
			currentPath = std::string(buffer, (count > 0) ? count : 0);
		}
		return currentPath;
	}

	bool FileSystem::Open(std::string path) {
		if (inFile) {
			return 0;
		}
		else {
			inFile.open(path);
			return 1;
		}
	}

	std::string FileSystem::FindFile(std::string filename) {
		return "";
	}

}