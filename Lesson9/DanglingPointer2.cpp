#include <iostream>

using namespace std;

class Ricxvi
{
	private:
		int* p;
	public:	
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
	Ricxvi *o1 = new Ricxvi(7);
	cout << *o1 << endl;
	delete o1;
	
	cout << *o1 << endl;
	
	return 0;
}





