#pragma once

#include "Functions.h"
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class String {
public:
	//Manager Functions
	String();																		//Default Constructor
	String(char ch);																//Overload Constructor
	String(const char* str);														//Overload Constructor
	String(const String& copy);														//Copy Constructor
	~String();																		//Destructor
	String& operator = (const String& rhs);											//Copy Assignment Operator
	friend String operator + (const String& lhs, const String& rhs);				//Concat Assignment Operator
	friend ostream& operator << (ostream& outStream, const String& str);			//Stream insertion Operator

	//Functions
	void Display();
	void ToUpper();
	void ToLower();

	//Getters
	const char* GetcString();

private:
	char* m_str;
};