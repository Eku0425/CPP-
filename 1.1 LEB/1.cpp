// Write a Program to find all even elements from a given 1D array.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 12
//a[1] = 42
//a[2] = 15
//a[3] = 55
//a[4] = 26

//Output:
//Even elements of an Array: 12, 42, 26


#include<iostream>

using namespace std;

main()
{
	int n;
	
	cout<<"enter the array size:";
	cin>>n;
	
	int a[n];
	int i;
	
	cout<<"enter the elements :";
	cout<<'\n';
	
	for(i=0;i<n;i++)
	{
		cout<< "a["<<i<<"]" ;
		cin>>a[i];
	}
	cout<<'\n'<<"enven element:";
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<< ',' ;
		}
	}
	
}
