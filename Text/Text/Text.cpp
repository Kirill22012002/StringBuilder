#include "pch.h"
#include "Text.h";
#include <limits>
#include <iostream>

namespace Text
{
	StringBuilder::StringBuilder() : capacity(16), length(0), maxCapacity(std::numeric_limits<int>::max()), chunkChars(getChunkByCapacity(16))
	{
	}

	StringBuilder::StringBuilder(int capacity) :
		capacity(capacity), length(0), maxCapacity(std::numeric_limits<int>::max()), chunkChars(getChunkByCapacity(capacity))
	{
	}

	StringBuilder::StringBuilder(std::string input) :
		capacity(input.length()), length(input.length()), maxCapacity(std::numeric_limits<int>::max()), chunkChars(getChunkByStrInput(input)) 
	{
		
	}

	int StringBuilder::getCapacity()
	{
		return capacity;
	}

	int StringBuilder::getLength()
	{
		return length;
	}

	int StringBuilder::getMaxCapacity()
	{
		return maxCapacity;
	}

	void StringBuilder::Append(char character) 
	{
		int newLength = length + 1;
		if (newLength > capacity) capacity = capacity * 2;
		chunkChars[length];
		length++;
	}

	void StringBuilder::Append(char* characterArr)
	{

	}

	void StringBuilder::Insert(char character, int idx)
	{

	}

	void StringBuilder::Insert(char* characterArr, int idx)
	{

	}

	void StringBuilder::Remove(char* characterArr)
	{

	}

	void StringBuilder::Replace(char* characterArr)
	{

	}

	std::string StringBuilder::ToString()
	{
		std::string result = "";
		for (int i = 0; i < length; i++)
		{
			result += chunkChars[i];
		}
		return result;
	}

	char* StringBuilder::getChunkByCapacity(int capacity)
	{
		char* result = new char[capacity];
		result[0] += '\0';
		return result;
	}

	char* StringBuilder::getChunkByStrInput(std::string input)
	{
		int inputLength = input.length();
		char* result = new char[inputLength];
		for (int i = 0; i < inputLength; i++)
		{
			result[i] = input[i];
		}
		return result;
	}
}
