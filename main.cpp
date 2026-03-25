#include <iostream>
#include <vector>
#include "DynamicArray.h"
#include "String.h"

using namespace std;

int main()
{
	String word("Hello");
	String word2{ " World" };

	cout << word.GetLength() << endl;
	cout << word2.GetLength() << endl;
	cout << word + word2 << endl;

	
	return 0;
}