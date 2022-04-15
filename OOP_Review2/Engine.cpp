#include"Engine.h"


Engine::Engine() 
	:m_cyl(0), m_manf("\0")	//Default Constructor
{
	cout << "Engine Class Default Constructor Called" << endl;
}
Engine::Engine(int cyl, String manf) //Overload Constructor
	:m_cyl(cyl), m_manf(manf)
{
	cout << "Engine Class Overload Constructor Called" << endl;
}
Engine::Engine(const Engine& copy)	//Copy Constructor
	:m_cyl(copy.m_cyl), m_manf(copy.m_manf)
{
	cout << "Engine Class Copy Constructor Called" << endl;
}
Engine::~Engine() {	//Destructor
	cout << "Engine Class Destructor Called" << endl;
}
Engine& Engine::operator = (const Engine& rhs) {	//Copy Assignment Opperator
	m_cyl = rhs.m_cyl;
	m_manf = rhs.m_manf;

	cout << "Engine Class Copy Assignment Opperator Called" << endl;

	return *this;
}

void Engine::SetCyl(int cyl) {
	this->m_cyl = cyl;
}
void Engine::SetManf(String manf) {
	this->m_manf = manf;
}
int Engine::GetCyl() {
	return this->m_cyl;
}
String Engine::GetManf() {
	return this->m_manf;
}