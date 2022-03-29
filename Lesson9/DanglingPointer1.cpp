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
	Ricxvi *o1 = new Ricxvi(7);
	Ricxvi *o2 = o1;
	
	cout <<"RST  :"<< &o2 << endl;
	cout <<"HEAP :"<< o2 << endl;
	cout <<"HEAP :"<< o1 << endl;
	delete o2;
	
	cout << "--------------------------------------" << endl;
	cout << *o2 << endl;
	
	Ricxvi *o3 = new Ricxvi(4);
	
	o2 = o3;
	
	cout << "--------------------------------------" << endl;
	
	cout << *o2 << endl;  // oxf1
	cout << o2 << endl;
	cout << o3 << endl;
	
	return 0;
}
	