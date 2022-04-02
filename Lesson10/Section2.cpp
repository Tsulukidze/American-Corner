#include <iostream>

using namespace std;

void Funqcia1(int &p)  // call by reference 
{
	p = 4;
}

void Funqcia2(int *p) // call by pointer
{
	*p = 14;
} 

int main()
{
	int a = 8;
	Funqcia1(a);
	cout << a << endl;
	
	int a2 = 8;
	int *p = &a2;
	Funqcia2(p);
	cout << a2 << endl;
	
	return 0;
	
}