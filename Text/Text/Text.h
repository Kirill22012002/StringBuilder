#pragma once
#include <string>

namespace Text
{
	class StringBuilder 
	{
	// constructor
	public: 
		StringBuilder();
		StringBuilder(int capacity);
		StringBuilder(std::string input);

	// Iterface 
	public:
		int getCapacity();
		int getLength();
		int getMaxCapacity();
		void Append(char character);
		void Append(char* characterArr);
		void Insert(char character, int idx);
		void Insert(char* characterArr, int idx);
		void Remove(char* characterArr);
		void Replace(char* characterArr);
		std::string ToString();

	// Internals 
	private: 
		int capacity;
		int length;
		int maxCapacity;
		char* chunkChars;

		char* getChunkByCapacity(int capacity);
		char* getChunkByStrInput(std::string input);
	};
}
