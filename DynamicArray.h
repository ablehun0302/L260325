#pragma once

// pragma once를 지원하지 않을 때 사용함. pragma once랑 동일한 역할임
#ifndef __DynamicArray_H__
#define __DynamicArray_H__

class DynamicArray
{
public:
	DynamicArray()
	{
		Size = 0;
		Capacity = 1;
		Data = new int[Capacity];
	}
	~DynamicArray()
	{
		delete[] Data;
		Data = nullptr;
	}

	void PushBack(int InValue)
	{
		Size++;
		int* NewData = nullptr;

		// Size가 Capacity보다 많으면 Capacity를 두배로 늘리고 새로운 배열 만들기
		if (Size > Capacity)
		{
			Capacity *= 2;
			NewData = new int[Capacity];

			// 기존 데이터 복사
			for (int i = 0; i < Size - 1; i++)
			{
				NewData[i] = Data[i];
			}

			// 새 데이터 넣기
			NewData[Size - 1] = InValue;

			// 기존 데이터 삭제
			delete[] Data;

			// 새 데이터 배열을 기존 데이터에 넣기
			Data = NewData;
		}
		// 아님 걍 넣기
		else
		{
			Data[Size - 1] = InValue;
		}
	}

	void RemoveAt(int AtIndex)
	{
		Size--;
		for (int i = AtIndex; i < Size; i++)
		{
			Data[i] = Data[i + 1];
		}
		Data[Size] = 0;
	}

	inline int GetSize() const
	{
		return Size;
	}

	inline int GetCapacity() const
	{
		return Capacity;
	}

	int& operator[](int Index) const
	{
		return Data[Index];
	}

//protected:
	int* Data;
	int Size;
	int Capacity;
};

#endif // __DynamicArray_H__