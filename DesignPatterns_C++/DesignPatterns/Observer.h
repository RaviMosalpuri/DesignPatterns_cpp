#pragma once
#include <vector>

namespace BehavioralDesignPatterns
{
	static int observerIdStatic = 0;
	class Observer
	{
	public:
		Observer();
		void update(int value);
	private:
		int observerId;
	};

	class Subject
	{
	public:
		void registerObserver(Observer* obs);
		void setValue(int val);
	private:
		void notifyObservers();
		int value = 0;
		std::vector<Observer*> observers;
	};
}