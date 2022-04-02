#ifndef RICXVI_HPP
#define RICXVI_HPP

#include <iostream>
using namespace std;

class Ricxvi
{
	private:
		int *pmnishvneloba;
	public:
		Ricxvi();
		Ricxvi(int);
		friend ostream& operator << (ostream&, Ricxvi&);
		~Ricxvi();
};

#endif