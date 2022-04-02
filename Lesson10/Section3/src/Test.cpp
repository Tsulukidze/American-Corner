#include "Student.hpp"

int main()
{
	Student *mariami  = new Student("mariami",4);
	Student *ekaterine = new Student("ekaterine",3);
	
	cout << *mariami;
	cout << *ekaterine;
	
	// Swap  obieqti mariami da ekaterine HomeWork
	
	
	delete mariami;
	delete ekaterine;
	return 0;
}
