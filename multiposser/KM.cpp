//Q.2 Write a Program to add two distances using binary plus (+) operator overloading.

//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
//
//Output:
//Km: 8, Meter: 70


#include<iostream>
using namespace std;

class AddDistance
{
	int km, m;
	
	public:
		void set(int n)
		{
	    	cout  << n;
			
			cout << endl << ">> Kilometer : ";
			cin >> km;
			
			cout << ">> Meter : ";
			cin >> m;
		}
		
		void get(){
			
			cout << endl << ">> Kilometer : " << km << "  Meter : " << m << endl << endl;
			
		}
		
		 AddDistance operator+(AddDistance m2)
		{
		
			AddDistance temp;
			
			temp.km = this->km + m2.km;
			temp.m = this->m + m2.m;
			
			temp.km = temp.km + (temp.m / 1000);
			temp.m = (temp.m % 1000); 
		
			return temp;
		}
	
};


int main(){
	
	AddDistance a1,a2,a3;
	
	a1.set(1);
	a2.set(2);
	
	a3 = a1 + a2;
	a3.get();
	
	return 0;
}
	
		

