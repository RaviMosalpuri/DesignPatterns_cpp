#include <iostream>
#include <vector>
#include "Observer.h"

using namespace BehavioralDesignPatterns;

//////////////////////////////////////////////////////

Observer::Observer()
	:observerId(observerIdStatic++)
{
}

void Observer::update(int value)
{
	std::cout << "Observer ID:" << observerId << ". Value updated in subject. Updated value: " << value << std::endl;
}

//////////////////////////////////////////////////////

void Subject::registerObserver(Observer* obs)
{
	this->observers.push_back(obs);
}

void Subject::setValue(int val)
{
	this->value = val;
	notifyObservers();
}

void Subject::notifyObservers()
{
	for (Observer* obs : observers)
	{
		obs->update(value);
	}
}