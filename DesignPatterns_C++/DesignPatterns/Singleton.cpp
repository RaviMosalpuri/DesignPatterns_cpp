#include "Singleton.h"

using namespace DesignPatterns;

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance()
{
	if (!instance)
	{
		std::cout << "Singleton instance created!!!\n";
		instance = new Singleton();
	}
	return instance;
}