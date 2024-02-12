//Q.1 Write a Program to make a Railway Reservation System.
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- By Searching Train Number
//(C) Minimum 3 Input Train Records


#include<iostream>
#include<string>

using namespace std;

class Train
{
	private:
		int train_num;
		string train_name;
	    static string source;
		string destination;
		int train_time;
		
		public:
		
			void setter()
			{
				cout << endl << endl;
				cout << "enter the train number=" << endl;
				cin >> train_num;
				
				cin.ignore();
				cout << "enter the train name=" << endl;
				getline(cin,train_name);

				
				cout << "enter the destination=" << endl;
				cin >> destination;
				
				cout << "enter the train time=" << endl;
				cin >> train_time;
			}
			void getter()
			{
				cout << endl << endl;
				cout << "Train Number=" << train_num << endl << "Train name=" << train_name << endl 
				<< "Source=" << source << endl << "Destination=" << destination << endl << "Train time=" << train_time << endl;
			}
			void Search()
			{
				cout << "enter the train number=" << endl;
				cin >> train_num;
			}
			void result()
			{
				cout << "Train Number=" << train_num << endl << "Train name=" << train_name << endl 
				<< "Source=" << source << endl << "Destination=" << destination << endl << "Train time=" << train_time << endl;
			}
		    Train()
			{
				cout << "Welcome to the Indian railway service !!!!" << endl ;
			}
			~Train()
			{
				cout << endl;
				cout << "Thank you !!!" << endl << endl;
			}
			
			
};

string Train :: source = "surat";
int main()
{
	

	int i;
    for(i=0; i<3; i++)
    {
    	Train t1;
    	t1.setter();
    	t1.getter();
}
	
	for(i=0; i<1; i++)
	{
		Train t1;
		t1.Search();
		t1.result();
	}


	
	return 0;

}
