#include "Moswavle.hpp"
#include "Xili.hpp"
#include "Bostneuli.hpp"

int main()
{
	Moswavle o1(8, 150, 40);
	
	cout << "Moswavle : " << endl;
	
	cout << "Asaki : " << o1.getAsaki()<< endl;
	cout << "Simagle : " << o1.getSimagle() << endl;
	cout << "Kilogrami : " << o1.getKilogrami() << endl;
	
	Bostneuli kitri(2000);
	Xili vashli(4000);
	
	o1.Wame<Bostneuli>(kitri);
	o1.Wame<Xili>(vashli);
	
	cout << "_____________________________________________________"<<endl;


	cout << "Kilogrami : " << o1.getKilogrami() << endl;
	
	return 0;
}