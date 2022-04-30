#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
using namespace std;

template <typename Obieqti>
class Queue
{
	private:
		Obieqti *items;
		int front;
		int back;
		int capacity;
		int length;
		
		void reserve(int newCapacity)
		{
			Obieqti *tmp = new Obieqti[newCapacity];
			
			for (int i=front, j=0; j<length; j++)
			{
				tmp[j] = items[i];
				i = (i+1) % capacity;
			}
			
			capacity = newCapacity;
			delete[] items;
			items = tmp;
			front = 0;
			back = length-1;
			
		}		
		
	public:
		Queue()
		{
			capacity = 8;
			front = 0;
			back = -1;
			length = 0;
			items = new Obieqti[capacity];
		}
		
		int count()const{
			return length;
		}
		
		bool isEmpty()const
		{
			return length == 0;
		}
		
		void clear()
		{
			front = 0;
			back = -1;
			length = 0;
		}
		
		void enqueue(const Obieqti& elementi)
		{
			if(length == capacity)
				reserve(2*capacity);
			
			back = (back+1) % capacity;
			items[back] = elementi;
			length++;
		}
		
		const Obieqti& peek()const
		{
			if (isEmpty()) throw "Shecdoma";
			return items[front];
		}
		
		void dequeue()
		{
			if (isEmpty()) throw "Shecdoma";
			front = (front+1) % capacity;
			length--;
		}
		
		~Queue()
		{
			delete[] items;
		}
	
};




#endif