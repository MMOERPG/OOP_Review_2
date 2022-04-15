#include"Car.h"

// manager functions
Car::Car()											//Default Constructor - Called when a Car object is required but the data for its local variables are not yet known or when creating an array of Car objects.
	:m_engine(), m_make("\0")
{
	cout << "Car Class Default Constructor Called" << endl;
}
Car::Car(const Engine engine, const String make)	//Overload Constructor - Called when the data for the Car objects local variables are known
	:m_engine(engine), m_make(make)
{
	cout << "Car Class Overload Constructor Called" << endl;
}

Car::Car(const Car& copy)							//Copy Constructor - Called when a new Car object is created using the data from an existing Car object
	: m_engine(copy.m_engine), m_make(copy.m_make)
{
	cout << "Car Class Copy Constructor Called" << endl;
}

Car::~Car() {										//Destructor - Called when memory needs to be deallocated that has been assigned to local variables within a Car object
	cout << "Car Class Destructor Called" << endl;
}
Car& Car::operator = (const Car& rhs) {				//Copy Assignment Opperator - Called when an already initialized Car object is assigned new data values from another existing Car object
	m_engine = rhs.m_engine;
	m_make = rhs.m_make;

	cout << "Car Class Copy Assignment Opperator Called" << endl;

	return *this;
}

void Car::SetEngine(Engine engine) {
	m_engine = engine;
}
void Car::SetMake(String make) {
	m_make = make;
}
Engine Car::GetEngine() {
	return m_engine;
}
String Car::GetMake() {
	return m_make;
}