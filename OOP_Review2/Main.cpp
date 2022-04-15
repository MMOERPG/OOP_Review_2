#include <iostream>
using std::cout;
using std::endl;

#include"Car.h"
#include"Engine.h"

#define _CRTDBG_MAP_ALLOC

//Engine Functions
void EngineByValue(Engine engine);
void EngineByReference(Engine& engine);
void EngineByPointer(Engine* engine);
void EngineByArr(Engine engine[]);
void EngineByConstRef(const Engine& engine);
Engine CreateReturnEngine();

//Car Functions
void CarByValue(Car car);
Car ReturnCarByValue(Car car);


int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//Step 1
	Engine eng0;
	Engine eng1(4, "Manual");

	//Step 2
	Engine* engPtr;

	//Step 3
	Engine engArr[3];

	//Step 4
	Engine engCopy(eng1);

	//Step 5
	engPtr = new Engine;

	//Step 6
	EngineByValue(eng1);

	//Step 7
	EngineByReference(eng1);

	//Step 8
	EngineByPointer(&eng1);

	//Step 9
	EngineByArr(engArr);

	//Step 10
	EngineByConstRef(eng1);

	//Step 11
	Engine returnedEngine = CreateReturnEngine();

	//Step 12
	delete engPtr;

	//Step 13
	Car aCar;

	//Step 14
	Car myCar(eng1, "Mazda Prodege 5");

	//Step 15
	CarByValue(myCar);

	//Step 16
	cout << "Step 16" << endl;
	Car yourNewCar = ReturnCarByValue(myCar);

	cout << "End" << endl;
	return 0;
}

//Engine Functions
void EngineByValue(Engine engine) {
	//Do Something
}

void EngineByReference(Engine& engine) {
	//Do Something
}

void EngineByPointer(Engine* engine) {
	//Do Something
}

void EngineByArr(Engine engine[]) {
	//Do Something
}

void EngineByConstRef(const Engine& engine) {
	//Do Something
}

Engine CreateReturnEngine() {
	Engine newEngine;
	//Do Something
	return newEngine;
}

//Car Functions
void CarByValue(Car car) {
	//Do Something
}

Car ReturnCarByValue(Car car) {
	//Do Something
	return car;
}