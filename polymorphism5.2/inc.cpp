//++

#include<iostream>
using namespace std;

class Math
{
	int num;
	public:
		void set(int num)
		{
			this->num=num;
			
		}
		
		void get()
		{
			cout<<num<<endl;
		}
		
		void operator --(int)
		{
			num--;
		}
	
};

int main()
{
	Math m1;
	m1.set(5);
	m1.get();
	
	m1--;
	m1.get();
	
	return 0;
}
