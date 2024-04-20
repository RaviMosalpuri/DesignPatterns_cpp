#include <iostream>
#include "DesignPatterns/Observer.h"
#include "DesignPatterns/Singleton.h"

using namespace CreationalDesignPatterns;
using namespace BehavioralDesignPatterns;

int main()
{
	std::cout << "Program started!\n";
	
	// Singleton pattern
	Singleton::getInstance();

	// Observer pattern
	Subject* subject = new Subject();
	Observer *observer1 = new Observer();
	Observer *observer2 = new Observer();

	subject->registerObserver(observer1);
	subject->registerObserver(observer2);
	subject->setValue(1);

	return 0;
}