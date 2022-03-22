#ifndef MOSWAVLE_HPP
#define MOSWAVLE_HPP


#include <iostream>

using namespace std;
class Moswavle
{
	private:
		int asaki;
		int simagle;
		double kilogrami;
	
	public:
		Moswavle(int a, double s)
		{
			asaki = a;
			simagle = s;
		}
		
		void AddAsaki (int a)
		{
			asaki += a;
		}
		
		void AddSimagle(double s)
		{
			simagle = simagle + s;
		}
		
		
		int getAsaki(){
			return asaki;
		}
		
		double getSimagle()
		{
			return simagle;
		}
		
		
		
		~Moswavle()
		{
			cout << "Obieqti Dasrulda" <<endl;
		}
		
		Moswavle(int a , double s, double k)
		{
			asaki = a;
			simagle = s;
			kilogrami = k;
		}
		
		double getKilogrami()
		{
			return kilogrami;
		}
		
		
		template <typename Sawmeli>
		void Wame(Sawmeli obieqti)
		{
			kilogrami += obieqti.getKaloria()/500;
		}
		
		
};
#endif