// Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.

#include<iostream>
using namespace std;

class Employee
{
	 
	protected:
		
		string compny_name = "ANT";
		
		public:
		void	myAccess()
			{

            cout << endl << ">>  Employee Access : " << endl;
            cout << "    Company Name : " << compny_name << endl;

           }
};

class Manager : public Employee
{
	
	    protected:
        int employee_salary = 40000;
        int total_staff = 25;
        int total_annual_revenue = 1.04;
        bool can_terminate = true;
         public:
        void myAccess()
		{

            cout << endl << ">>  Manager Access : " << endl;
            cout << "    Company Name : " << compny_name << endl
                 << "    Employee Salary : " << employee_salary << endl
                 << "    Total Staff : " << total_staff << endl
                 << "    Total Annual Revenue : " << total_annual_revenue << endl
                 << "    Can Terminate : " << can_terminate << endl; 

        }

};



class Admin : public Manager{

    protected:
        int manager_salary = 70000;

    public:
        void myAccess()
		{

            cout << endl << ">>  Admin Access : " << endl;
            cout << "    Company Name : " << compny_name << endl
                 << "    Manager Salary : " << manager_salary << endl
                 << "    Employee Salary : " << employee_salary << endl
                 << "    Total Staff : " << total_staff << endl
                 << "    Total Annual Revenue : " << total_annual_revenue << endl
                 << "    Can Terminate : " << can_terminate << endl; 

        }

};


int main(){

    Admin admin;
    Manager manager;
    Employee employee;

    admin.myAccess();
    manager.myAccess();
    employee.myAccess();

    return 0;
}
	
	
	
	


   
        


