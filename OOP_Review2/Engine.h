#pragma once

#include<iostream>
using std::cout;
using std::endl;
#include"String.h"

class Engine {
public:
	Engine();								//Default Constructor
	Engine(int cyl, String manf);			//Overload Constructor
	Engine(const Engine& copy);				//Copy Constructor
	~Engine();								//Destructor
	Engine& operator = (const Engine& rhs);	//Copy Assignment Opperator

	void SetCyl(int cyl);
	void SetManf(String manf);
	int GetCyl();
	String GetManf();

private:
	int m_cyl;
	String m_manf;
};