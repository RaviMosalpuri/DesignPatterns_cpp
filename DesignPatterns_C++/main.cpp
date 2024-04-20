#include <iostream>
#include "DesignPatterns/Singleton.h"

using namespace DesignPatterns;

int main()
{
	Singleton::getInstance();
	std::cout << "Hello world!";

	return 0;
}