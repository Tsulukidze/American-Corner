#include "Moswavle.hpp"

Moswavle::Moswavle()
{
	asaki = 10;
	simagle = 180;		
}
			
Moswavle::Moswavle(int age, double h)
{
	asaki = age;
	simagle = h;
}

int Moswavle::getAsaki()
{
	return asaki;
}

int Moswavle::getSimagle()
{
	return simagle;
}
		
void Moswavle::AddAsaki(int age)
{
	asaki += age;
}

void Moswavle::AddSimagle(double h)
{
	simagle += h;
}

Moswavle::~Moswavle()
{
	cout << "Obieqti dasrulda " << endl;
}


