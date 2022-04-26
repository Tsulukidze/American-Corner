#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
using namespace std;

template <typename Obieqti>
class Node{
	public:
		Obieqti data;
		Node<Obieqti> *next;
		Node<Obieqti> *prev;
	
		Node(const Obieqti data, Node<Obieqti> *next=NULL; Node<Obieqti> *prev=NULL)
		{
			this->data = data;
			this->next = next;
			this->prev = prev;
		}
	
	
};

#endif