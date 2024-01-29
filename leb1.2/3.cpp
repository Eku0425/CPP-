//Write a program to convert second into hh: mm: ss.

#include<iostream>
using namespace std;

main()
{
	int totalsec;
	cout<<"enter the totalsec:";
	cin>>totalsec;
	
	int hours=totalsec/3600;
	
	totalsec=totalsec%3600; //remaining sec
	int min=totalsec/60;
//	int min=(totalsec%3600)/60;
	int sec=totalsec%60;
	
	cout<<"hours:"<< hours <<endl<<"mins:"<< min<<endl <<"sec:"<<sec <<endl;
}
