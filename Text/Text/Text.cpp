#include "pch.h"
#include "Text.h";
#include <limits>
#include <iostream>

namespace Text
{
	StringBuilder::StringBuilder() : capacity(16), lenght(0), maxCapacity(std::numeric_limits<int>::max()), chunkChars(getChunkByCapacity(16))
	{
	}

	StringBuilder::StringBuilder(int capacity) : 
		capacity(capacity), lenght(0), maxCapacity(std::numeric_limits<int>::max()), chunkChars(getChunkByCapacity(capacity))
	{
	}

	int StringBuilder::getCapacity()
	{
		return capacity;
	}

	int StringBuilder::getLenght()
	{
		return lenght;
	}

	int StringBuilder::getMaxCapacity() 
	{
		return maxCapacity;
	}

	char* StringBuilder::getChunkByCapacity(int capacity)
	{
		char* result = new char[capacity];
		for (int i = 0; i < capacity; i++)
		{
			result[i] = '\0';
		}

		return result;
	}
}
