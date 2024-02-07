//Write a Program to get and display Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity


#include<iostream>
using namespace std;

class Foodcafe

{
	private:
		int id;
		string name;
		int staff_qunatity;
		int rating;
		string type;
		int establish_year;
		string location;
		
		public:
        
		void setValues()
		{
			
		     cout<<"enter the id :";
		     cin>>id;
		     
		     cin.ignore();
		     cout<<"enter the cafe name :";
		     getline(cin,name);
		     
		     cout<<"enter the cafe type  (like a rooftop or normal) :";
		     getline(cin,type);
		     
		     cout<<"enter the cafe rating : ";
		     cin>>rating;
		     
		     cin.ignore();
		     cout<<"enter the cafe location : ";
		     cin>>location;
		     
		     cout<<"enter the cafe establish year : ";
		     cin>>establish_year;
		     
		     cout<<"enter the cafe staff qunatity : ";
		     cin>>staff_qunatity;
		     
		
		}
		
		void getValues()
		{
			cout << endl << ">> - - - Cafe Details - - - <<" <<
                    endl;

                     cout<< "id : " << id <<endl;
                     cout << "name : " << name <<endl;
                     cout<< "ratings : " << rating <<endl;
                     cout<< "cafe type : " << type <<endl;
                     cout << "cafe location : " << location <<endl;
                     cout << "cafe establish year : " << establish_year <<endl;
                     cout<<" cafe staff qunatity : "<<staff_qunatity<<endl;
                     
	   }
	   
	   Foodcafe()
	   {
	   	   cout<<endl<<"----------- ENTER THE CAFE DEATILS--------"<<endl;
	   	   
	   	   
	   	   
	   }
	   ~Foodcafe()
	   {
	   	    cout<<endl<<"__________________^_^_THANK YOU^_^_______________"<<endl;
	   	    
	   }
				
	
};

int main()
{
	
	  int n,i;
	  
	  cout<<"how many cafe deatils to add:";
	  cin>>n;
	  
	  for(i=0;i<n;i++)
	  {
	  	Foodcafe c;
	  	c.setValues();
	  	c.getValues();
	  }
	  
	
	
	return 0;
	
}


