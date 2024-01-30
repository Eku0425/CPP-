//Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
//For example,

#include<iostream>

using namespace std;


class Time
{ 
    int sec,hour,min;
    
    
		
};

main()
{
	
	 int totalsec;
	 
	 
	cout<<"enter the totalsec:";
	cin>> totalsec;
	
	
	 
  int	 hour=totalsec/3600;
  totalsec=totalsec%3600;
  int	min=totalsec/60;
  int	sec=totalsec/60;

	
	cout<<"hour"<<endl<<hour<<"min"<<endl<<min<<endl<<"sec"<<endl<<sec;
	
}

