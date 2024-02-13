// Write a Program that defines a shape class with a constructor that gives value to width and height.
// Then define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
 // In the main, define two objects a triangle and a rectangle, and then call the area() 
  // function using these two objects.
  
#include<iostream>
using namespace std;

class Shape
{
	  public:
	  	
	  	int  height, width;
	  	
	  	void get ()
	  	{
	  		cout<<"enter the height:";
	  		cin>>height;
	  		
	  		cout<<"enter the width:";
	  		cin>>width;
	  		
	    }
};

class Rectangle : public  Shape
{
	  public:
	  	
	  	void area()
	  	{
	  		 cout<<"RECTANGLE:"<<endl;
	  		 get();
	  		 
	  		 cout<<"rectangle is: "<< height *width<< endl<<endl;
		 }
};

class Triangle : public  Shape
{
	  public:
	  	
	  	void area()
	  	{
	  		 cout<<"TRIANGLE:"<<endl;
	  		 get();
	  		 
	  		 cout<<"trinagle is: "<< (height * width)/2<< endl;
		 }
};

int main()
{
	Rectangle r1;
	Triangle t1;
	r1.area();
	t1.area();

	return 0;
}



	
	  

