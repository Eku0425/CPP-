//++ ,--

#include<iostream>
using namespace std;

class Math
{
	 int a,b;
	 
	 public:
	 	void set()
	 	{
	 		cout<<"enter the a:";
	 		cin>>a;
	 		
	 		cout<<"enter the b:";
	 		cin>>b;
	 	}
	 	
	 	void get()
	 	{
	 		cout<<"a :"<< a <<endl <<"b :"<< b<<endl;
	 		
	    }
	    
	    Math operator +(Math&m2)
	    {
	    	Math temp;
	    	int x=this->a +m2.a;
	    	int y=this->b+m2.b;
	    	temp.a=x;
	    	temp.b=y;
	    	return temp;
	    	
	    	
		}
	 	
	 	
	 		
};

int main()
{
	
	Math m1,m2,m3;
	
	m1.set();
	m2.set();
	
	m3=m1+m2;//m1.operator+(m2);
	
	m3.get();
	
	return 0;
	
}


	
	
	
	
	
	

