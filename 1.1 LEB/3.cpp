//Q.3 Write a program to read and print distance for feet and inches.
//For example,
//input : 
//Enter feet: 6
//Enter inches: 40

//output: Feet - 9, Inch - 4

//1 feet=12 inch

#include<iostream>

using namespace std;

main()
{
	int feet,inches;
	
	cout<<"enter the feet:";
	cin>>feet;
	
	
	
	cout<<"enter the inches:";
	cin>>inches;
	
	int x=inches/12;
	
	feet=feet+x;
	inches=inches-(x*12);
	
	cout<<feet<<endl;
	cout<<inches;
	
	
	
}

