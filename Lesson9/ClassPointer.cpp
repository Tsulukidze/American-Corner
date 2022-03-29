#include <iostream>

using namespace std;

class Ricxvi
{
	private:
		int mnishvneloba;
	public:	
		Ricxvi(int par)
		{
			mnishvneloba = par;
		}
		
		Ricxvi()
		{
			mnishvneloba =5;
		}
		
		friend ostream& operator<<(ostream& ekrani, Ricxvi& obj) 
		{
			ekrani << obj.mnishvneloba;
			return ekrani;
		}
		
};

int main()
{
	for (int i=0; i<5; i++)
	{
		Ricxvi *o1 = new Ricxvi();
		cout << "Heap  : "<<o1  << endl;
		cout << "RTS   : "<<&o1 << endl;
		delete o1;
	}
	return 0;
}