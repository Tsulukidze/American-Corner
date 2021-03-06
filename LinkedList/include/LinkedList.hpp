#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Iterator.hpp"
#include "NoSuchElement.hpp"

template <typename Obieqti>
class LinkedList
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
				index++;
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
		
		const Obieqti& first()
		{
			return head->next->item;
		}
		
		const Obieqti& last()
		{
			return FindPrevByPosition(size).getCurrent();
		}
		
		
		int indexOf(const Obieqti& elementi)
		{
			int index=0;
			for (Iterator<Obieqti> iterator(head->next); iterator.hasNext(); iterator.next())
			{
				if(iterator.getCurrent() == elementi) return index;
				index++;
			}
		}
		
		const Obieqti& elementAt(int index)
		{
			Iterator<Obieqti> iterator = FindPrevByPosition(index);
			return iterator.current->next->item;
		}
		
		bool find(const Obieqti& elementi) const
		{
			for (Iterator<Obieqti> iterator(head->next); iterator.hasNext(); iterator.next())
			{
				if(iterator.getCurrent() == elementi) return true;
			}
			
			return false;
		}
		
		void remove(const Obieqti& elementi)
		{
			int lokacia = indexOf(elementi);
			removeAt(lokacia);
		}
		
		void removeAt(int index)
		{
			Iterator<Obieqti> iteratori = FindPrevByPosition(index);
			Node<Obieqti> *del = iteratori.current->next;
			iteratori.current->next = iteratori.current->next->next;
			delete del;
			size--;
		}
		
		friend ostream& operator <<(ostream& ekrani , LinkedList<Obieqti> &right)
		{
			ekrani << endl;
			
			for (Iterator<Obieqti> iterator(right.head->next); iterator.hasNext(); iterator.next())
			{
				ekrani << iterator.getCurrent() << " -> ";
			}
			
			ekrani << " NULL " << endl;
			return ekrani;		
		}
		
		void clear()
		{
			while(!isEmpty())
				removeAt(0);
		}
		
		~LinkedList()
		{
			clear();
			delete head;
		}
			
};
#endif