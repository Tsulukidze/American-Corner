#include "Queue.hpp"


class Studenti
{
	private:
		string saxeli;
		int asaki;
	public:
	
		Studenti()
		{
			saxeli = " ";
			asaki = -1;
		}
		
		Studenti(string saxeli , int asaki)
		{
			this->saxeli = saxeli;
			this->asaki = asaki;
		}
	
		friend ostream& operator << (ostream& ekrani, Studenti& right)
		{
			ekrani << right.saxeli << " - " << right.asaki <<endl;
			return ekrani;
		}
};



int main()
{
	Queue<Studenti *> *Bufetisrigi = new Queue<Studenti*>();
	
	Bufetisrigi->enqueue(new Studenti("Gio",18));
	Bufetisrigi->enqueue(new Studenti("Ia",13));
	Bufetisrigi->enqueue(new Studenti("Inga",12));
	Bufetisrigi->enqueue(new Studenti("Ekaterine",11));
	Bufetisrigi->enqueue(new Studenti("Temo",10));
	
	cout << *Bufetisrigi->peek();
	
	cout << "_____________________________________"<<endl;
	delete Bufetisrigi->peek();
	Bufetisrigi->dequeue();
	
	delete Bufetisrigi->peek();
	Bufetisrigi->dequeue();
	
	Bufetisrigi->enqueue(new Studenti("dd",11));
	Bufetisrigi->enqueue(new Studenti("aa",10));


	delete Bufetisrigi->peek();
	Bufetisrigi->dequeue();
	
	
	cout << *Bufetisrigi->peek();
	
	delete Bufetisrigi;

	
}











