//Q.1 Write a Program to create a Message class with a constructor that takes a single string with a default value.
// Create a private member of the typed string, and in the constructor simply assign the argument string to your internal string. 
//Create two overloaded member functions called print( ): 
//one that takes no arguments and simply prints the message stored in the variable and one that takes a string argument, which it prints in addition to the internal message.


#include<iostream>

using namespace std;

class Message
{
	string msg;
	
	public:
		
		Message(string msg)
		{
			this->msg=msg;
		}
		void print()
		{
			cout<< msg<<endl;
		}
		void print(string newMsg)
		{
			cout<<msg<<" "<< newMsg <<endl;
			
		}
		
};
int main()
{
	Message m1("HII");
	m1.print();
	m1.print("Eku");
	
	return 0;
}

