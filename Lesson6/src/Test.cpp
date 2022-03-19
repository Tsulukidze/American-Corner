#include "Moswavle.hpp"

int main()
{
	Moswavle gio, cotne(8,140);
	
	cout << "moswavle 1" << endl;
	cout << "asaki " << gio.getAsaki() << endl;
	cout << "simagle " << gio.getSimagle() << endl;
	
	cout << "moswavle 2" << endl;
	cout << "asaki " << cotne.getAsaki() << endl;
	cout << "simagle " << cotne.getSimagle() << endl;
	
	gio.AddAsaki(5);
	cotne.AddSimagle(20);
	
	cout << "______________________________________________________" << endl;
	
	cout << "moswavle 1" << endl;
	cout << "asaki " << gio.getAsaki() << endl;
	cout << "simagle " << gio.getSimagle() << endl;
	
	cout << "moswavle 2" << endl;
	cout << "asaki " << cotne.getAsaki() << endl;
	cout << "simagle " << cotne.getSimagle() << endl;
	
	
	return 0;
}