//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

#include<iostream>
using namespace std;

class Math
{
	protected:
		int num;
		public:
			Math()
			{
				cout<<"enter the num:";
				cin>>num;
			}
	
};

class Square : public Math
{
	public:
		
			void getsquare()
			{
				            cout << "Suqare  " << num << " = " << num * num << endl; 

			}
		
		
	
};


class Cube : public Math
{

    public:
        void getCube()
		{

            cout << "Cube  " << num << " = " << num * num * num << endl; 

        }

};


int main ()
{
	Square s1;
	s1.getsquare();
	
	Cube c1;
	c1.getCube();
}
