#pragma once

#include <iostream>
using std::cout;
using std::endl;
#include "Engine.h"
#include"String.h"

class Car {
public:
	// manager functions
	Car();											//Default Constructor
	Car(const Engine engine, const String make);	//Overload Constructor
	Car(const Car& copy);							//Copy Constructor
	~Car();											//Destructor
	Car& operator = (const Car& rhs);				//Copy Assignment Opperator

	// setters
	void SetEngine(Engine engine);
	void SetMake(String make);

	// getters
	Engine GetEngine();
	String GetMake();

private:
	Engine m_engine;
	String m_make;
};