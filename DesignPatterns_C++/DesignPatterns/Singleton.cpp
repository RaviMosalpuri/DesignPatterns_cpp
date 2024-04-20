#include "Singleton.h"

using namespace CreationalDesignPatterns;

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance()
{
	if (!instance)
	{
		std::cout << "Singleton instance created!" << std::endl;
		instance = new Singleton();
	}
	return instance;
}