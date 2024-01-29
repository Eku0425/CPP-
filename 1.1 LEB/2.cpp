#include<iostream>
using namespace std;

main()
{
	int x,y;
	
	cout<<"enter the num x:";
	cin>>x;
	
	cout<<"enter the num y:";
	cin>>y;
	
	
	int total,j;
	
	total=y-x;
	
	j=(total/4)+1;
	
	int s[j];
	
	int i;
	for(i=x;i<=y;i++)
	{
		if(i%4==0)
		{
			cout<<i<<endl;
//			s[j]=j;
		}
	}
//	cout<<"total leap yerar:"<<s[j];
//	
	
}
