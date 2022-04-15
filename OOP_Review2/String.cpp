#include "String.h";


//Manager Functions
String::String()	//Default Constructor
	:m_str(nullptr)
{
	m_str = new char[1]{'\0'};
}

String::String(char ch)	//Overload Constructor
	: m_str(nullptr)
{
	if (ch == '\0') {
		m_str = new char[1]{ch};
	}else {
		m_str = new char[2]{'\0'};
		m_str[0] = ch;
	}
}

String::String(const char* str)	//Overload Constructor
	:m_str(nullptr)
{
	if (str == nullptr) {
		m_str = new char[1]{ '\0' };
	}else {
		m_str = new char[strlen(str) + 1]{ '\0' };
		StringCopy(m_str, str);
		//strcpy_s(m_str, sizeof(str), str);
	}
}

String::String(const String& copy)	//Copy Constructor
	:m_str(nullptr)
{
	if (copy.m_str == nullptr) {
		m_str = new char[1]{ '\0' };
	}
	else {
		m_str = new char[strlen(copy.m_str) + 1]{ '\0' };
		StringCopy(m_str, copy.m_str);
		//strcpy_s(m_str, sizeof(copy.m_str), copy.m_str);
	}
}

String::~String() {	//Destructor
	delete[] m_str;
}

//Operators
String& String::operator = (const String& rhs) {	//Copy Assignment Operator
	if (this != &rhs) {
		delete[] m_str;
		m_str = new char[strlen(rhs.m_str) + 1];
		StringCopy(m_str, rhs.m_str);
		//strcpy_s(m_str, sizeof(rhs.m_str), rhs.m_str);
	}

	return *this;
}

String operator + (const String& lhs, const String& rhs) {	//Concat + Operator
	int strLength = strlen(lhs.m_str) + strlen(rhs.m_str);
	char* buffer = new char[strLength + 1]{'\0'};
	StringCopy(buffer, lhs.m_str);
	StringConcat(buffer, rhs.m_str);

	String tempString = buffer;

	delete[] buffer;

	return tempString;
}

ostream& operator << (ostream& outStream, const String& str){	//Stream Insertion Operator
	outStream << str.m_str;
	return outStream;
}

//Public Functions
void String::Display() {	//Displays the string to console (not needed with Stream Insertion Operator)
	cout << m_str << endl;
}

void String::ToUpper() {	//Sets all char in string to uppercase
	//for (char i = 0; m_str; m_str[i] = toupper(m_str[i]));
	for (int i = 0; i < StringLength(m_str); i++) {
		m_str[i] = toupper(m_str[i]);
	}

}

void String::ToLower() {	//Sets all char in string to lowercase
	//for (char i = 0; m_str; m_str[i] = tolower(m_str[i]));
	for (int i = 0; i < StringLength(m_str); i++) {
		m_str[i] = tolower(m_str[i]);
	}
}

//Getters
const char* String::GetcString() {	//returns the cstring array as const char pointer
	return m_str;
}