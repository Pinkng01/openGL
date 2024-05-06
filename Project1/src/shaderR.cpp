#include "shaderR.h"

std::string shader_read(std::string path)
{
	std::string tmp = "";
	std::ifstream strm(path, std::ios::in);
	if (strm.is_open()) {
		std::getline(strm, tmp);
	}
	else
	{
		std::cout << "failed to open file";
	}
	return tmp;
}

