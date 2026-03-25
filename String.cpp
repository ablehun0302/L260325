#include "String.h"

String::String(const char* InString)
{
	// 문자열 길이 체크하고 -> Length에 기록
	Length = GetLength(InString);

	// 길이 + 1만큼 동적 배열 만들고
	StringData = new char[Length + 1];
	
	// 문자열 복붙
	for (int i = 0; i <= Length; i++)
	{
		StringData[i] = InString[i];
	}
}

String::~String()
{
	delete[] StringData;
	StringData = nullptr;
}

const char* String::operator+(const char* Other)
{
	char* NewString = nullptr;
	size_t NewLength = Length + GetLength(Other) + 1;

	// 기존 문자열, 다른 문자열 길이 + 1을 더한 길이가 새로운 길이
	// 그 길이로 배열 만들기
	NewString = new char[NewLength];

	// 배열에 짬뽕시키기
	for (int i = 0; i < Length; i++)
	{
		NewString[i] = StringData[i];
	}
	for (int i = Length; i < NewLength; i++)
	{
		NewString[i] = Other[i - Length];
	}
	return NewString;
}

const char* String::operator+(const String& Other)
{
	char* NewString = nullptr;
	size_t NewLength = Length + Other.Length + 1;

	// 기존 문자열, 다른 문자열 길이 + 1을 더한 길이가 새로운 길이
	// 그 길이로 배열 만들기
	NewString = new char[NewLength];

	// 배열에 짬뽕시키기
	for (int i = 0; i < Length; i++)
	{
		NewString[i] = StringData[i];
	}
	for (int i = Length; i < NewLength; i++)
	{
		NewString[i] = Other.StringData[i - Length];
	}
	return NewString;
}

size_t String::GetLength()
{
	return Length;
}

size_t String::GetLength(const char* InString)
{
	size_t Length = 0;
	for (int i = 0; InString[i] != '\0'; i++)
	{
		Length++;
	}
	return Length;
}
