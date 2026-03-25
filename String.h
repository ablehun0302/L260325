#pragma once
#ifndef __String_H__
#define __String_H__
class String
{
public:
	String(const char* InString);
	~String();

	const char* operator+(const char* Other);
	const char* operator+(const String& Other);

	size_t GetLength();
	size_t GetLength(const char* InString);

private:
	size_t Length = 0;
	char* StringData;
};

#endif