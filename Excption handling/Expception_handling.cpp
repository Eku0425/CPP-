// Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter


#include<iostream>


using namespace std;

class A
{
	private:
		int a,b;
		int age;
		string password;
	
	  public:
	  	void Division()
	  	{
	  		cout<<"___________DIVISION_________"<<endl;
	  		
	  		cout<<"enter the a:";
	  		cin>>a;
	  		
	  		cout<<"enter the b:";
	  		cin>>b;
	  		
	  		
	  		
	  		
	  		try
	  		{
	  			if(b==0)
	  			{
	  				throw b;
	  				
			    }
			    else
			    {
			        cout << endl << "Division : " << a/ b << endl;

				}
		    }
		    catch(int j)
		    {
		      cout << endl << "Invalid! Can't divide by " << j << endl;

			}
	  		
	    }
	    void Age()
	    {
	    	cout<<"__________AGE________"<<endl;
	    	
	    	cout<<"enter the age:";
	    	cin>>age;
	    	
	    	try
	    	{
	    		if(age<18)
	    		{
	    			throw age;
				}
				else
				{
					cout<<"you are eligible for vote";
				}
			}
			catch(...)
			{
				cout<<"you r not eligible for vote";
			}
	    	
		}
	
	
};

int main()
{
	A a1;
	a1.Division();
	a1.Age();
	
	
}





































 
