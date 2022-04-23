#ifndef DOUBLYLINKEDLIST
#define DOUBLYLINKEDLIST

#include "Node.hpp"
#include "NoSuchElement.hpp"

template <typename Obieqti>


class DoublyLinkedList
{
	private:
		Node<Obieqti> *head;
		int size;
		
		Node<Obieqti>* FindPreviousByPosition(int index)
		{
			Node<Obieqti> *prv = head;
			int i=1;
			for(Node<Obieqti> *itr = head; itr->next !=NULL  && i!=index; itr = itr->next, i++)
			{
				prv = prv-next;
			}
			return prv;
		}
		
	public:
		DoublyLinkedList()
		{
			head = NULL;
			size = 0;
		}
		
		int Count()const
		{
			return size;
		}
		
		bool isEmpty()const{
			return size ==0;
		}
		
		void add(const Obieqti& elementi)
		{
			insert(size, elementi);
			
		}
		
		void insert(int index, const Obieqti& elementi)
		{
			if(index==0)
			{
				head = new Node<Obieqti>(elementi,head);
				if (head->next !=NULL) head->next->prev = head;
				
			}
			
			else
			{
				Node<Obieqti> *current = FindPreviousByPosition(index);
				current->next = new Node<Obieqti>(elementi, current->next, current);
				if(current->next->next !=NULL )
				{
					current->next->next->prev = current->next;
				}
					
			}
			size++;
		}
		
		const Obieqti& first()
		{
			return head->data;
		}
		
		const Obieqti& last()
		{
			return FindPreviousByPosition(size)->data;
		}
		
		int indexOf(const Obieqti& elementi)
		{
			int index=0;
			for(Node<Obieqti> *itr=head; itr !=NULL; itr= itr->next)
			{
				if (itr->data == elementi) return index;
				index++;
			}
		}
		
		
		void remove(const Obieqti& elementi)
		{
			int lokacia = indexOf(elementi);
			removeAt(lokacia);
		}
		
		void removeAt(int index)
		{
			Node<Obieqti> *del;
			
			if (index == 0)
			{
				del = head;
				head = head->next;
				if(head !=NULL) head->prev = NULL;
				
			}
			else
			{
				Node<Obieqti> *current= FindPreviousByPosition(index);
				del = current->next;
				current->next = del->next;
				if (del->next !=NULL)
					del->next->prev = current;	
				
			}
			
			size--;
			delete del;
			
		}
		
		
		bool find(const Obieqti& elementi)
		{
			for(Node<Obieqti> *itr =head; itr !=NULL; itr= itr->next){
				if (itr->data = elementi) return true;
			}
			return false;
		}
		
		const Obieqti& elementAt(int index)
		{
			if(index ==0) return head->data;
			return FindPreviousByPosition(index)->next->data;
		}
		
		void clear()
		{
			while (!isEmpty())
			{
				removeAt(0);
			}
		}
		
		friend ostream& operator << (ostream& ekrani, DoublyLinkedList& right)
		{
			ekrani << endl;
			for (Node<Obieqti> *itr = right.head; itr!=NULL; itr=itr->next)
			{
				ekrani << itr->data << " <--> ";
			}
			ekrani << endl;
			return ekrani;
		}
		
		
		void printReverseFromPosition(int index)
		{
			for (Node<Obieqti> *itr = FindPreviousByPosition(index+1); itr!=NULL; itr= itr->prev)
			{
				cout << itr->data << " <--> ";
			}
			
			cout << endl;	
		}
		
		void printReverseOrder()
		{
			printReverseFromPosition(size-1);
		}
		
		
		~DoublyLinkedList()
		{
			clear();
		}
	
};



#endif
