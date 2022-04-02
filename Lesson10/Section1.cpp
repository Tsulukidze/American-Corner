#include <iostream>

using namespace std;

class Ricxvi
{
	
		
	public:	
	
		int* p;
		Ricxvi(int par)
		{
			p = new int(par);
		}
		
		Ricxvi()
		{
			p = new int(5);
		}
		
	
		
		friend ostream& operator<<(ostream& ekrani, Ricxvi& obj) 
		{
			ekrani << *obj.p;
			return ekrani;
		}
		
		~Ricxvi()
		{
			delete p;
		}
};



int main()
{

	Ricxvi *o1 = new Ricxvi(10);
	Ricxvi *o2 = new Ricxvi(20);
	
	cout << "o1 : " << *o1 << endl;
	cout << "o2 : " << *o2 << endl;
	
	int * temp;
	temp = o1->p;
	o1->p = o2->p;
	o2->p = temp;
	
	cout << "o1 : " << *o1 << endl;
	cout << "o2 : " << *o2 << endl;
	return 0;
}