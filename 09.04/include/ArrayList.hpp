#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP


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
			Obieqti *tmp = new Obieqti[newCapacity]
			for (int i=0; i<length; i++)
				tmp[i] = items[i];
			if (items !=NULL) delete[] items; 
			items = tmp;
			capacity = newCapacity;
		}
		
	public:
		ArrayList()
		{
			length = 0;
			capacity = 10;
			items = NULL;
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
		
		void add(const Obieqti& elementi)  
		{
			insert(length, elementi)
		}
		
		void insert (int indx, const Obieqti& elementi)
		{
			if(length >=capacity)
				reserve(max(1, 2*capacity));
			
			for (int i= length-1; i>=indx; i--)
				items[i+1] = items[i];
			
			items[indx] = elementi;
			length++;
			
		}
		
		const Obieqti& first()
		{
			return items[0];
		}
		
		const Obieqti& last()
		{
			return items[length-1];
		}
		
		int indexOf (const Obieqti& elementi)
		{
			for(int i=0; i<length; i++)
				if(items[i] == elementi) return i;
			
			// throw NoSuchElement("No Such element");
		}
		
		const Obieqti& elementAt (int indx)
		{
			return items[indx];
		}
		
		void removeAt(int indx)
		{
			for (int i = indx+1; i<length; i++)
				items[i-1] = items[i];
			
			length--;
		}
		
		void remove (const Obieqti& elementi)
		{
			for (int i=0; i<length;i++)
			{
				if(items[i] == elementi)
				{
					removeAt(i);
					return;
				}
			}
			
			// throw NoSuchElement("No Such Element")
		}
		
};


#endif