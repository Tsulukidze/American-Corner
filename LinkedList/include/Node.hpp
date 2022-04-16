#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
using namespace std;

template <typename Obieqti>
class Node
{
	public:
		Obieqti item;
		Node<Obieqti> *next;
		
		Node(const Obieqti& item = Obieqti(), Node<Obieqti> *next = NULL)
		{
			this->item = item;
			this->next = next;
		}
};


#endif