#include <iostream>
#include <vector>
#include "DynamicArray.h"

using namespace std;

int main()
{
	DynamicArray MyArray;

	MyArray.PushBack(2);
	MyArray.PushBack(1);
	MyArray.PushBack(3);
	MyArray.PushBack(6);
	MyArray.PushBack(4);
	MyArray.PushBack(8);

	cout << "Size: " << MyArray.GetSize() << endl;
	cout << "Capacity: " << MyArray.GetCapacity() << endl;
	for (int i = 0; i < MyArray.GetSize(); i++)
	{
		cout << MyArray.Data[i] << endl;
	}

	MyArray.PushBack(7);
	MyArray.PushBack(5);
	//MyArray.PushBack(9);

	cout << "Size: " << MyArray.GetSize() << endl;
	cout << "Capacity: " << MyArray.GetCapacity() << endl;
	for (int i = 0; i < MyArray.GetSize(); i++)
	{
		cout << MyArray.Data[i] << endl;
	}

	MyArray.RemoveAt(4);

	cout << "Size: " << MyArray.GetSize() << endl;
	cout << "Capacity: " << MyArray.GetCapacity() << endl;
	for (int i = 0; i < MyArray.GetSize(); i++)
	{
		cout << MyArray.Data[i] << endl;
	}

	return 0;
}