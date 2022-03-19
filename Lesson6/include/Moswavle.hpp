#ifndef MOSWAVLE_HPP
#define MOSWAVLE_HPP  

#include <iostream>
using namespace std;

class Moswavle{
	private:
		int asaki;
		double simagle;
		
	public:
		Moswavle(int, double);
		Moswavle();
		int getAsaki();
		int getSimagle();
		void AddAsaki(int);
		void AddSimagle(double);
		~Moswavle();
		
};
#endif