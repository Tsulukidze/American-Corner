#include "Student.hpp"

Student:: Student(string saxeli, int age)
{
	this->saxeli = saxeli;
	asaki = new Ricxvi(age);
}

Student::~Student()
{
	delete asaki;
}

ostream& operator<<(ostream& ekrani, Student& obj)
{
	ekrani << obj.saxeli  << "  :  " << obj.asaki <<endl;
	return ekrani;
}