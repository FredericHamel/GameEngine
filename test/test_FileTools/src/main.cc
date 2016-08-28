#include <FileTools.h>
#include <exception>
#include <iostream>

using namespace ugen;

int main(int argc, char **argv) {
	FileTools::Init();
	FileTools::AddSearchPath(".");
	try
	{
		size_t size = 0;
		char *buffer = nullptr;
		FileTools::LoadFileBuffer("GameEngine.log", &size, &buffer);
		std::cout.write(buffer,size) << std::endl;
		FileTools::UnloadFileBuffer(&buffer);
		FileTools::LoadFileBuffer("NotAFile.txt", &size, &buffer);
		std::cout.write(buffer, size) << std::endl;
		FileTools::UnloadFileBuffer(&buffer);
	}catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	FileTools::Quit();
	return 0;
}
