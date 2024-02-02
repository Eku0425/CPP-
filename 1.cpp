// Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity


#include<iostream>
#include<string.h>
using namespace std;


class HotelData
{    

    private:
	int id,hotel_rating;
	string location,hotel_type;
	static int hotel_establish_year;
	static string hotel_name;
	int hotel_staff_quantity;
	int hotel_room_quantity;
	
	public:
		
		void set()
		{
			cout<<"Enter the id: ";
			cin>>id;
			
			 cin.ignore();
			cout<<"Enter the hotel type: ";
			getline(cin,hotel_type);
			
			//cin.ignore();
			cout<<"Enter the hotel location:";
			getline(cin, location);
			
			cout<<"Enter the hotel staff quantity:";
			cin>>hotel_staff_quantity;
			
			cout<<"Enter the hotel room quantity:";
			cin>>hotel_room_quantity;
			
			cout<<"Enter the hotel rating:";
			cin>>hotel_rating;
					cin.ignore();
		}
		
		void get()
		{
			
		        cout << endl << ">> Hotel "<<endl ;
                cout << "   Id : " << id << endl; 
                cout << "   name : " << hotel_name<< endl;
                cout << "   type : " << hotel_type <<endl;
                cout << "   ratings : " << hotel_rating <<endl;
                cout << "   location(city) : " << location <<endl;
                cout << "   establish year : " << hotel_establish_year <<endl;
                cout << "   staff quantity : " <<  hotel_staff_quantity <<endl;
                cout << "   room qantity : " << hotel_room_quantity <<endl;
                cout << endl;

		}	
};

string HotelData::hotel_name = "Aman Hotel";
int HotelData::hotel_establish_year = 2001;

int main()
{
	
	
	    int n;
	    
//	   	int id,hotel_rating;
//	string location,hotel_type;
//	static int hotel_establish_year;
//	static string hotel_name;
//	int hotel_staff_quantity;
//	int hotel_room_quantity;
//	
//		

    cout << endl << ">> How many hotel data you wan to enter : ";
    cin >> n;

    HotelData hotel[n];

    cout << endl << ">> Enter Hotel details "<<endl;
    

    for (int i = 0; i < n; i++)
	{



        hotel[i].set();
    }

  //  cout << endl << endl << ">> Hotel Data <<" << endl;

    for (int i = 0; i < n; i++)
	{

        hotel[i].get();

    }

    return 0;
}
	  
	
	

