#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP


#include "EmptyList.hpp"
#include "NoSuchElement.hpp"
#include "IndexOfBound.hpp"

template <typename Obieqti>  // Obieqti - int , string , char .. 

class ArrayList
{
	private:
		Obieqti *items;
		int length;
		int capacity;
		
		void reserve(int newCapacity)
		{
			if (capacity >= newCapacity) return;
			Obieqti *tmp = new Obieqti[newCapacity];
			for (int k=0; k<length; k++)
				tmp[k] = items[k];
			if (items !=NULL) delete[] items; 
			items = tmp;
			capacity = newCapacity;
		}
		
	public:
		ArrayList()
		{
			length = 0;
			capacity = 10;
			items = new Obieqti[capacity];
		
		}
		
		ArrayList(const ArrayList &right) // Copy constructor
		{
			length = 0;
			items = new Obieqti[right->length()];
			for(int i=0;i<right.size();i++){
				insert(i,right.at(i));
			}
			capacity=length;
		}
		
		// michvenebs arraylist- is zomas
		int size() const
		{
			return length;
		}
		
		bool isEmpty() const
		{
			return size() ==0;
		}
		
		void add(const Obieqti& item)  
		{
			insert(length, item);
		}
		
		void insert (int indx, const Obieqti& item) //throw(IndexOfBound)
		{
			//if(indx <0 || indx>length)  throw IndexOfBound("Araswori Indexi");
			if(length >=capacity)
				reserve(max(1, 2*capacity));
			
			for (int i= length-1; i>=indx; i--) items[i+1] = items[i];
		
			items[indx] = item;
			length++;
			
		}
		
		const Obieqti& first() const throw(EmptyList)
		{
			if (length==0) throw EmptyList("List is empty ");
			return items[0];
		}
		
		const Obieqti& last() const throw(EmptyList)
		{
			if (length==0) throw EmptyList("List is empty ");
			return items[length-1];
		}
		
		int indexOf (const Obieqti& elementi) const throw(NoSuchElement)
		{
			for(int i=0; i<length; i++)
				if(items[i] == elementi) return i;
			
			throw NoSuchElement("aseti elementi ararsebobs");
		}
		
		const Obieqti& elementAt (int indx)const  throw(NoSuchElement)
		{
			if(indx <0 || indx>=length) throw NoSuchElement("Ver vnaxe elementi ");
			return items[indx];
		}
		
		void removeAt(int indx) throw(NoSuchElement)
		{
			if(indx <0 || indx>=length) throw NoSuchElement("Ra wavshalo ??");
			for (int i = indx+1; i<length; i++)
				items[i-1] = items[i];
			
			length--;
		}
		
		void remove (const Obieqti& elementi) throw(NoSuchElement)
		{
			for (int i=0; i<length;i++)
			{
				if(items[i] == elementi)
				{
					removeAt(i);
					return;
				}
			}
			
			throw NoSuchElement("No Such Element");
		}
		
		
		void clear()
		{
			length == 0;
		}
		
		friend ostream& operator <<(ostream& ekrani, ArrayList<Obieqti>& obj)
		{
			ekrani << endl;
			for(int i=0; i<obj.length; i++)
			{
				ekrani << obj.items[i];  
				if(i+1 !=obj.length) ekrani << " || ";   // gio || ia || ....
			}
			return ekrani;
		}
		
		
		~ArrayList()
		{
			if(items != NULL) delete[] items;
		}
};


#endif
