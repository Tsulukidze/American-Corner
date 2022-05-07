#include "Queue.hpp"
#include "Person.hpp"

int main(){
	Queue<Person> *group = new Queue<Person>();
	Person *p1 = new Person("Gio",45);
	Person *p2 = new Person("Ia",55);
	Person *p3 = new Person("Ekaterine",90);
	
	group->enqueue(*p1);
	group->enqueue(*p2);
	group->enqueue(*p3);
	
	group->dequeueMax();
	
	cout<<group->peek()<<endl;
	cout<<group->peekMax()<<endl;
	
	delete p1;
	delete p2;
	delete p3;
	delete group;
	return 0;
}
