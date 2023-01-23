#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <filesystem>



namespace Terminal {
	struct Configuration {
		std::string winTitle;
		float winWidth;
		float winHeight;
		float winPosX;
		float winPosY;
	public:
		Configuration(std::string winTitle = "Terminal", float winWidth = 1024.0f, float winHeight = 720.0f,  float winPosX = 100.0f, float winPosY = 100.0f) {
			this->winTitle = winTitle; 
			this->winWidth = winWidth;
			this->winHeight = winHeight;
			this->winPosX = winPosX;
			this->winPosY = winPosY;
		}
	};

	struct Styles {

	};


	static class Parser {
	public:
		static bool CheckSyntax() {
			std::string path;
			
			std::vector<std::string> winProps = { "title", "width", "height", "posX", "posY" };
			outFile.open("config/prop.tcon");
			if (outFile) {
				std::string data;
				std::string temp;
				std::getline(outFile, data);
				data.erase(remove(data.begin(), data.end(), ' '), data.end());
				char ch;
				temp = "";
				for (int i = 0; i < data.length(); i++) {
					if (data[i] == ';' || data[i] == ':') { break; }
					temp = temp + data[i];
				}
				if (std::find(winProps.begin(), winProps.end(), temp) != winProps.end()) {
					return true;
				}
				return false;
			}
			else {
				std::cout << "File does not exits" << std::endl;
			}
			system("pause");
		}
		static bool OpenFile() {

		}
		static void SetPath(std::string path_) {
			path = path_;
		}
		static float GetWidth() {

		}
		static float GetHeight() {

		}
		static float GetPosX() {

		}
		static float GetPosY() {

		}
		static std::string GetTitle() {

		}
		static void InitProps() {
			GetWidth();
			GetHeight();
			GetPosX();
			GetPosY();
			GetTitle();
		}
	private:
		static std::string path;
		static std::ifstream outFile;
	};
	std::string Parser::path = "config/prop.tcon";

	

	void Test() {
		std::string path;
		std::ifstream outFile;
		std::vector<std::string> winProps = { "title", "width", "height", "posX", "posY" };
		outFile.open("config/prop.tcon");
		if (outFile) {
			std::string data;
			std::getline(outFile, data);
			data.length();
			size_t num = data.find("width");

			std::cout << num << std::endl;

			outFile.close();
		}
		else {
			std::cout << "File does not exits" << std::endl;
		}
		


		std::cout << "Could not open file" << std::endl;
		
		system("pause");
	}

	
}
