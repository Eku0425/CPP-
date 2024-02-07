// Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods


#include<iostream>
using namespace std;

class X
{
	 protected:
	 	
	 	int a,b,c,ans1 ,ans2,ans3,sum=0;
};

class Y : public X
{
		
		public:
		
		void setData()
		{
			 cout<<"enter the a:";
			 cin>>a;
			 
			 cout<<"enter the b:";
			 cin>>b;
			 
			 cout<<"enter the c:";
			 cin>>c;
			 
		}	
		
		void getData()
		{
		  ans1=a*a*a;
		ans2=b*b*b;
		ans3=c*c*c;
		cout<<"cub is :"<<ans1<<endl;
		cout<<"cub is :"<<ans2<<endl;
		cout<<"cub is :"<<ans3<<endl<<endl;
		sum=ans1+ans2+ans3;
		cout<<"sum is :"<<sum;
		}
			
			
};

int main()

{
	
	Y y1;
	y1.setData();
	y1.getData();
	
	return 0;
	
}
	
