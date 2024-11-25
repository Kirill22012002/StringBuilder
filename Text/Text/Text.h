#pragma once

namespace Text
{
	class StringBuilder 
	{
	// constructor
	public: 
		StringBuilder();
		StringBuilder(int capacity);

	// Iterface 
	public:
		int getCapacity();
		int getLenght();
		int getMaxCapacity();

	// Internals 
	private: 
		int capacity;
		int lenght;
		int maxCapacity;
	};
}
