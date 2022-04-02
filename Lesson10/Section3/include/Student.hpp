#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Ricxvi.hpp"

class Student
{
	private:
		string saxeli;
	public:
		Ricxvi *asaki;
		Student(string, int);
		friend ostream& operator << (ostream&, Student&);
		~Student();
};


#endif