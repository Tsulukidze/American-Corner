#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "Node.hpp"

template <typename Obieqti>
class Iterator
{
	public:
		Node<Obieqti> *current;
		
		Iterator()
		{
			current = NULL;  
		}
		
		Iterator(Node<Obieqti> *mimdinare)
		{
			current = mimdinare;
		}
		
		bool hasNext()
		{
			return current != NULL;
		}
		
		void next()
		{
			current = current->next;
		}
		
		const Obieqti& getCurrent()const
		{
			return current->item;
		}
};

#endif