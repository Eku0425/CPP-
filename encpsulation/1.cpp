// Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college

#include<iostream>
#include<string.h>
using namespace std;

//void Showtitle()
//{
//	cout<<"STUNDENT RECORD : ";
//}
     

class Data
{
	private:
		int id,age;
		string name,city,clg,course,email;
	public:
		


void set()
{
	cout<<"enter the id : ";
	cin>>id;
	
	cin.ignore();
	
	cout<<"enter the name : ";
	getline(cin,name);
	
	cout<<"enter the age : ";
	cin>>age;
	
	cin.ignore();
	cout<<"enter the course : ";
	getline(cin,course);
	
	cout<<"enter the city  : ";
	getline(cin,city);
	
	cout<<"enter the email : ";
	getline(cin,email);
	
	cout<<"enter the clg :  ";
	getline(cin,clg);
	
}

void get()
{
	cout<<endl<<"student"<<endl;
	
	cout<<endl<<"id: "<< id<<endl;
	
	cout<<"name: "<<name<<endl;
	
	cout<<"age: "<<age<<endl;
	
	cout<<"course: "<<course<<endl;
	
	cout<<"city: "<<city<<endl;
	
	
	cout<<"email: "<<email<<endl;
	
	cout<<"clg: "<<clg<<endl;
	
}


};

int main()
{
	Data d1[5];
//	Showtitle();
	int i;
	
	for(i=0;i<5;i++)
	{
		d1[i].set();
		
		cout<<endl;
		
	}
	cout<<endl<<"student Data"<<endl;
	
	for(i=0;i<5;i++)
	{
		d1[i].get();
	}
	
	
}

