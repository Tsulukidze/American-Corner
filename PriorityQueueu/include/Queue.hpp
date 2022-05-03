#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
using namespace std;

template <typename Obieqti>
class Node
{
	public:
		Obieqti item;
		Node<Obieqti> *next;
		
		Node(Obieqti item, Node<Obieqti>* next=NULL)
		{
			this->item = item;
			this->next = next;
		}
		
		
};


template <typename Obieqti>

class Queue
{
	private:
		Node<Obieqti> *front;
		Node<Obieqti> *back;
		int length;
	
	public:
		Queue()
		{
			front = back = NULL;
			length = 0;
		}
		
		int count() const
		{
			return length;
		}
		
		bool isEmpty()const{
			return length == 0;
		}
		
		void enqueue(const Obieqti& elementi)
		{
			Node<Obieqti> *last = new Node<Obieqti>(elementi);
			if(isEmpty()) 
				front = back = NULL;
			
			else{
				back->next = last;
				back = back->next;
			}
			length++;
		}
		
		void dequeue()
		{
			if (isEmpty()) throw "Rigi Carielia";
			Node<Obieqti> *tmp = front;
			front = front->next;
			delete tmp;
			length--;
		}
		
		void clear()
		{
			while(!isEmpty())
				dequeue();
		}
		
		Obieqti& peek()const{
			if(isEmpty()) throw "Rigi Carielia";
			return front->item;
		}
		
		~Queue()
		{
			clear();
		}
		
};














#endif 