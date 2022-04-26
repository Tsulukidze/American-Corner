#ifndef CIRCULADLL_HPP
#define CIRCULADLL_HPP

#include "Node.hpp"


template<typename Obieqti>

class CircularDLL{
	private:
		Node<Obieqti> *head;
		int size;
		
		Node<Obieqti>* FindPrevByPosition(int index)
		{
			Node<Obieqti> *current = head;
			int i=1;
			for (Node<Obieqti> *itr = head; i!=index; itr=itr->next,i++)
			{
				current = current->next;
			}
			return current;
		}
		
	public:
		CircularDLL()
		{
			head = NULL;
			size = 0;
		}
		
		int Count()const{
			return size;
		}
		
		bool isEmpty()const{
			return size ==0;
		}
		
		void add(const Obieqti& item)
		{
			insert(size,item);
		}
		
		void insert(int index, const Obieqti& item)
		{
			if (index ==0)
			{
				if(size ==0){
					head = new Node<Obieqti>(item,head);
					head->next = head->prev = head;
					 
				}
				else
				{
					head = new Node<Obieqti>(item,head,head->prev);
					head->next->prev = head;
					head->prev->next = head;
				}
			}
			
			else
			{
				Node<Obieqti>*current = FindPrevByPosition(index);
				current->next = new Node<Obieqti>(item,current->next,current);
				current->next->next->prev = current->next;
			}
			
			size++;
			
		}
		
		
		const Obieqti&first()
		{
			return head->data;
		}
		
		const Obieqti& last()
		{
			return head->prev->data;
		}
		
		int indexOf (const Obieqti& item)
		{
			int index =0;
			
			for (Node<Obieqti> *itr =haed; index<size; itr = itr->next){
				
				if (itr-> data == item) return index;
				index++;
			}
		}
		
		void remove(const Obieqti& item)
		{
			int index = indexOf(item);
			removeAt(index);
		}
		
		void removeAt(int index)
		{
			Node<Obieqti> *del;
			
			if (index ==0)
			{
				del = head;
				if (size ==1) head = head->next = head->prev = NULL;
				else{
					head = head-next;
					head->prev = del->prev;
					del->prev->next = head;
				}
			}
			
			else
			{
				Node<Obieqti> *current = FindPrevByPosition(index);
				del = current->next;
				current-next = del->next;
				del->next->prev = current;
				
			}
			
			size--;
			delete del;
		}
		
		
		bool find(const Obieqti& elementi)
		{
			int index=0;
			for (Node<Obieqti> *itr =haed; index<size; itr = itr->next){
				
				if (itr-> data == item) return true;
				index++;
			}
			
			return false;
		}
		
		const Obieqti& elementAt(int index)
		{
			if(index == 0) return head->head;
			return FindPrevByPosition(index)->next->data;
		}
		
		void clear()
		{
			while(!isEmpty())
			{
				removeAt(0);
			}
		}
		
		
		friend ostream& operator << (ostream& ekrani, CircularDLL& right)
		{
			ekrani << endl;
			int index =0;
			for (Node<Obieqti> *itr = right.head; index< right.size; itr=itr->next)
			{
				ekrani << itr->data << " <--> ";
				index++;
			}
			ekrani << endl;
			return ekrani;
		}
		
		
		void printReverseFromPosition(int index)
		{
			int i=0;
			for (Node<Obieqti> *itr = FindPreviousByPosition(index+1); i<size; itr= itr->prev,i++ )
			{
				cout << itr->data << " <--> ";
			}
			
			cout << endl;	
		}
		
		void printReverseOrder()
		{
			printReverseFromPosition(size-1);
		}
		
		
		~CircularDLL()
		{
			clear();
		}
		
};



#endif