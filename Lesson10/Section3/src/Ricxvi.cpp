#include "Ricxvi.hpp"

Ricxvi:: Ricxvi(int par)
{
	pmnishvneloba = new int(par);
}

Ricxvi:: Ricxvi()
{
	pmnishvneloba = new int(2);
}

ostream& operator << (ostream& ekrani, Ricxvi& obj)
{
	ekrani << *obj.pmnishvneloba << endl;
	return ekrani;
}

Ricxvi::~Ricxvi()
{
	delete pmnishvneloba;
}

