#pragma GCC diagnostic ignored "-Wdeprecated"
#include <cstdlib>
#include "LinkedList.hpp"


int main()
{
	LinkedList<string> *saxelebi = new LinkedList<string>();
	int select =0;
	string saxeli;
	int lokacia;
	
	do{
		system("CLS");
		cout << "1. Daamate Saxeli" << endl;
		cout << "2. Wasahale Saxeli" << endl;
		cout << "3. Wasahale Saxeli lokaciaze" << endl;
		cout << "4. Daamate Saxeli lokaciaze" << endl;
		cout << "5. Ipove Lokacia" << endl;
		cout << "6. Elementebis raodenoba " << endl;
		cout << "7. Pirveli saxeli" << endl;
		cout << "8. Bolo Saxeli" << endl;
		cout << "9. Machvene chemi Listi" << endl;
		cout << "10.Gaasuftave chemi listi " << endl;
		cout << "11. EXIT  " << endl;
		cin >> select;
		system("CLS");
		
		switch(select)
		{
			case 1:
				cout << "Saxeli :";
				cin.ignore();
				getline(cin, saxeli);
				saxelebi->add(saxeli);
			break;
			
			case 2:
				cout << "Saxeli :";
				cin.ignore();
				getline(cin, saxeli);
				saxelebi->remove(saxeli);
			break;
			
			case 3:
				cout << "Lokacia  :";
				cin >> lokacia;
				saxelebi->removeAt(lokacia);
			break;
			
			case 4:
				cout << "Lokacia ";
				cin >> lokacia;
				cout << "Saxeli :";
				cin.ignore();
				getline(cin, saxeli);
				saxelebi-> insert(lokacia, saxeli);  
			break;
			
			
			case 5:
				cout << "Saxeli :";
				cin.ignore();
				getline(cin, saxeli);
				cout << "Lokacia  : " << saxelebi->indexOf(saxeli);
				cin.ignore();
				cin.get();
			break;
			
			case 6:
				cout << "Saxelebis Raodenoba = " << saxelebi->Count()<<endl;
				cin.ignore();
				cin.get();
			break;
			
			case 7:
				cout << "Pirveli Saxeli  : " << saxelebi->first()<< endl;
				cin.ignore();
				cin.get();
			break;
			
			case 8:
				cout << "Bolo Saxeli  : " << saxelebi->last()<< endl;
				cin.ignore();
				cin.get();
			break;
			
			case 9:
				cout << "Saxelebi  :" <<endl;
				cout << *saxelebi <<endl;
				cin.ignore();
				cin.get();
			break;
			
			case 10:
				saxelebi->clear();
				cout << "Gasuftavda yvela saxeli" << endl;
				cin.ignore();
				cin.get();
			break;
			
			case 11:
			break;
			
			default:
				cout << "Araswori operacia " << endl;
				cin.ignore();
				cin.get();
			break;
		}
		system("CLS");
	}while (select !=11);
	delete saxelebi;
}

	