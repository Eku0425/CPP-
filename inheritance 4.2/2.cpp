//Write a Program to demonstrate the use of a scope resolution operator to solve ambiguity errors.


#include<iostream>
using namespace std;

class A
{
	protected:
		int a =10;
		
};

class B
{
	protected:
		int a=20;
};

class c :public A,public B
{
	   public :
	   	
	   	void print()
	   	{
	   		cout<< A::a<<endl;
	   		
		 }
	
};

int main()
{
	c c1;
	c1.print();
	return 0;
}


