//Q.1 Write a Program to overload + operator to find which object contains a higher value from given 2numbers .

#include<iostream>
using namespace std;

class Math

{
	int x,y;
	
	public:
		void set()
		{
			cout<<"enter the value x:"<<endl;
			cin>>x;
			
			cout<<"enter the value y:"<<endl;
			cin>>y;
			
		}
		void get ()
		{
			cout<<"X:"<<x<<endl;
			cout<<"Y:"<<y<<endl;
			
		}
		Math operator < (Math &m2)
		{
			Math high;
			if(m2.x < x)
			{
				high.x = x;
				high.y = y;
				cout << endl << "Higher value 1st =>  " << endl;
			}
			else
			{
				high.x = m2.x;
				high.y = m2.y;
				cout << endl << "Higher value 2nd => " << endl;
			}
			
			return high; 
		}
		
			
		
};



int main()
{
	
	Math m1,m2,m3;
	
	cout<<" 1st  obj value:"<<endl;
	m1.set();
	
	cout<<" 2nd obj value:"<<endl;
	m2.set();
	
	m3=m1<m2;
	
	m3.get();	
	return 0;
	
}
