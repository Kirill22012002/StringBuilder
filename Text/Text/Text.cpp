#include "pch.h"
#include "Text.h";
#include <limits>

namespace Text
{
	StringBuilder::StringBuilder() : capacity(16), lenght(0), maxCapacity(std::numeric_limits<int>::max())
	{
	}

	StringBuilder::StringBuilder(int capacity) : capacity(capacity), lenght(0), maxCapacity(std::numeric_limits<int>::max())
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
}
