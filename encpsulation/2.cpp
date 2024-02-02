//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)


#include<iostream>
#include<string.h>
using namespace std;



//attributes and studendt method store
class Data
{
	private:
		int id,age,simcard_valid;
		double mobile_num;
		string name,city,telecom_brand_name;
		
		
		public:
			
	void set()
	{
//		cout << endl << ">>   Customer " << count;
		
		cout<<"enter the id: ";
		cin>>id;
		
		cin.ignore();
		
		cout<<"enter the name: ";
		getline(cin,name);
		
		cout<<"enter the age: ";
		cin>>age;
		
		cout<<"enter the city: ";
		getline(cin,city);
		
		cout<<"enter the mobile num: ";
		cin>>mobile_num;
		
		cout<<"enter the simcard validity (in year): ";
		cin>>simcard_valid;
		
		cout<<"enter the telecom brand (Airtel, Jio, Vi): " ;
		getline(cin,telecom_brand_name);
		
		cin.ignore();
		
		
	}
	
	void get()
	{
//		cout << endl << ">>Customer " << count << endl;
		
		cout<<endl<<"id "<<  id <<endl;
		
		cout<<"name "<<name <<endl;
		
		cout<<" age "<<age<<endl;
		
		cout<<"city "<<city<<endl;
		
		cout<<"mobile num "<<mobile_num<<endl;
		
		cout<<"simcard vilditiy"<<simcard_valid<<endl;
		
		cout<<"telecom breand "<<telecom_brand_name<<endl;
		
	}
		
};

int main()
{
	
	  cout<<"enter the coustemr detelis:"<<endl;
	int i;
	
	Data d1[5];
	
	for (i = 0; i < 5; i++)
	{

        d1[i].set();

    }
    
    cout << endl << ">> Customer Data <<" << endl;

    
	for ( i = 0; i < 5; i++)
	{

        d1[i].get();

    }
	
	
	
	
	 
	
	
	return 0;
	
}
