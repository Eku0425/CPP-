// Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition

#include<iostream>
using namespace std;

class A
{
	protected:
		int num,num1,num2,num3,num4;
		
};

class B : public A
{
	 public:
	 	
	 	void calculate(int num ,int num1)
		 {
		 	  this->num  =  num;
		 	  this->num1 =  num1;
		 	  
		 	  cout<<"division :"<<num/num1<<endl ; 
		 }
		 
		 void calculate(int num ,int num1 ,int num2)
		 {
		 	  this->num  =  num;
		 	  this->num1 =  num1;
		 	  this->num2 =  num2;
		 	  
		 	  cout<<"subtraction  :"<<num-num1-num2<<endl; 
		 }	
		 
		  void calculate(int num ,int num1 ,int num2,int num3)
		 {
		 	  this->num  =  num;
		 	  this->num1 =  num1;
		 	  this->num2 =  num2;
		 	  this->num3 =  num3;
		 	  
		 	  cout<<"multiplication  :"<<num*num1*num2*num3<<endl; 
		 }
		 void calculate(int num ,int num1 ,int num2,int num3,int num4)
		 {
		 	  this->num  =  num;
		 	  this->num1 =  num1;
		 	  this->num2 =  num2;
		 	  this->num3 =  num3;
		 	  this->num4 =  num4;
		 	  
		 	  cout<<" addition  :"<<num+num1+num2+num3+num4<<endl; 
		 }
		 
};

int main()
{
	
	 B b1;

   b1.calculate(4,25);
   b1.calculate(25,20,10);
   b1.calculate(4,25,18,19);
   b1.calculate(4,25,18,19,12);

	return 0;
}
	
	
	

			
		
	    
	
	


