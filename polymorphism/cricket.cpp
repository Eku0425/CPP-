//Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:
//- Class Cricket -> Class T20Match
//- Class Cricket -> Class ODIMatch
//- Override the getTotalOvers() method in both classes.


#include<iostream>
using namespace std;

class Cricket
{
	
	protected:
		
		int overs =0;
		public:
			void getTotaleovers()
			{
				cout<<"call cricket class (overs):"<< overs <<endl ;
				
			}
			
};
class T20Match : public Cricket
{
	 public:
	 	
	 	 
	 	 
	 	void getTotaleovers()
			{
					 	 overs=20;

				cout<<"call  T20 class (overs):"<<overs <<endl ;
				
			}
};

class ODIMatch: public Cricket
{
	 public:
	 	
	 	 
	 	 
	 	void getTotaleovers()
			{
					 	 overs=50;

				cout<<"call  ODI class (overs):"<<overs <<endl ;
				
			}
};

int main()
{
	T20Match t1;
	ODIMatch o1;
	t1.getTotaleovers();
	o1.getTotaleovers();
	
	
	
	
	
	
	return 0;
	
}


