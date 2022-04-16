#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Iterator.hpp"
#include "NoSuchElement.hpp"

template <typename Obieqti>

class LinkedList()
{
	private:
		Node<Obieqti> *head;
		int size;
		
		Iterator<Obieqti> FindPrevByPosition(int position)
		{
			int index=0;
			Iterator<Obieqti> iterator(head);
			while(iterator.hasNext() && position !=index)
			{
				iterator.next();
				index++
			}
			return iterator;
		}
		
	public:
		LinkedList()
		{
			head = new Node<Obieqti>();
			size = 0;
		}
		
		bool isEmpty()const 
		{
			return head->next==NULL;
		}
		
		int Count()const{
			return size;
		}
		
		void add(const Obieqti& elementi)
		{
			insert(size,elementi);
		}
		
		void insert(int index, const Obieqti& elementi)
		{
			Iterator<Obieqti> iteratori = FindPrevByPosition(index);
			iteratori.current->next = new Node<Obieqti>(elementi, iteratori.current->next);
			size++;		 
		}
		
};



#endif