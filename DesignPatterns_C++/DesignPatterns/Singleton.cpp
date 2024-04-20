#include "Singleton.h"

using namespace DesignPatterns;

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance()
{
	if (!instance)
	{
		std::cout << "Singleton instance created!!!";
		instance = new Singleton();
	}
	return instance;
}