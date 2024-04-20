#pragma once
#include <iostream>

namespace CreationalDesignPatterns
{
	/// <summary>
	/// This is a singleton class that will have only one instance at a time.
	/// </summary>
	class Singleton
	{
	public:
		static Singleton* getInstance();

	private:
		Singleton() {}
		static Singleton* instance;
	};
}