#pragma GCC diagnostic ignored "-Wdeprecated"
#include <cstdlib>
#include "ArrayList.hpp"


int main()
{
	ArrayList<string>* saxelebi = new ArrayList<string>();
	int select = 0;
	string name;
	int indeqsi;
	
	do{
		system("CLS");
		cout << "1. Daamate Saxeli " << endl;
		cout << "2. Washale Saxeli " << endl;
		cout << "3. Daamate Saxeli Indexit " << endl;
		cout << "4. Washale Saxeli Indexze " << endl;
		cout << "5. Machvene ArrayList " << endl;
		cout << "6. Gaasuftave ArrayList " << endl;
		cout << "7. EXIT" << endl;
		
		cout << "Risi gaketeba gsurs ? ";
		cin >> select;
		system("CLS");
		
		switch(select)
		{
			case 1:
				cout << "Saxeli : " ;
				cin.ignore();
				getline(cin,name);
				saxelebi->add(name);
			break;
			case 2:
				cout << "Saxeli : " ;
				cin.ignore();
				getline(cin,name);
				try
				{
					saxelebi->remove(name);
				}
				catch(NoSuchElement &vervipove)
				{
					//cout << "RAAAAAA ????" << endl;
					cout << endl << vervipove.Message()<< endl;
					cin.get();
				}
				
			break;
			case 3:
				
				cout << "Sheiyvane Indeqsi";
				cin >> indeqsi;
				cout << "Saxeli";
				cin.ignore();
				getline(cin, name);
				saxelebi->insert(indeqsi, name);
			break;
			case 4:
				
				cout << "Sheiyvane Indeqsi";
				cin >> indeqsi;
				saxelebi->removeAt(indeqsi);
			break;
			case 5:
				cout << "Saxelebi  : ";
				cout << *saxelebi << endl;
				cin.ignore();
				cin.get();
			break;
			case 6:
				saxelebi->clear();
				cout << "  Gasuftavebulia  " << endl;
				cin.ignore();
				cin.get();
			break;
			case 7:
			break;
			default:
				cout << "Sheiyvane ricxvi 1-7 shualedshi " << endl;
				cin.ignore();
				cin.get();
			break;
		}
		
		system("CLS");
	}while(select !=7);
		
	delete saxelebi;
}