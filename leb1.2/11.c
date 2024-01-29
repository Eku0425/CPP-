#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public:
		int id,age,salary,experience;
		string name,role,city,company_name;
		
		void input()
		{
			
			 cout<<"enter the employee id:";
			 cin>>id;
			cout << "Enter the employee Name:";
			cin >> name;
			cout << "Enter the employee Role :";
			cin >> role;
			cout <<"Enter the employee city :";
			cin >> city;
			cout << "Enter the employee age:";
			cin>>age;
			cout<<"Enter the employee salary: ";
			cin>>salary;
			cout<<"Enter the employee company name:";
			cin>>company_name;
			cout<<"enter the employee experience:";
			cin>>experience;
		}
		
		void output()
		{
			cout << id << endl;
			cout << name << endl;
		}
};
int main()
{
	Employee e[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		cout<<endl;
		e[i].input();
	}
	
	for(i=0;i<5;i++)
	{
		cout<<endl;
		e[i].output();
	}
	
	return 0;
}
