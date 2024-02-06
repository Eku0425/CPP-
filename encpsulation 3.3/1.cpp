// Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)



#include<iostream>
#include<string.h>

using namespace std;

class Companie
{
	
	private:
		
		int id;
	    string comp_name;
        int comp_staff_quantity;
        int comp_revenue; 
        int imported_diamonds; 
        int exported_diamonds;
        string comp_ceo;
        
        public:
        	companie(int id, string comp_name,int comp_staff_quantity,int comp_revenue, int imported_diamonds, int exported_diamonds,string comp_ceo,int i)
        	{
        		
        		
         	 this-> id = id;
             this->comp_name = comp_name;
             this->comp_revenue = comp_revenue;
             this->comp_staff_quantity = comp_staff_quantity;
             this->imported_diamonds = imported_diamonds;
             this->exported_diamonds = exported_diamonds;
             this->comp_ceo = comp_ceo;

        		cout<<">>-------------COMPANY  DEETAILS------------------- >>"<<endl;
				
        		
        		
        	cout << endl << ">>- - - - Comapny Details - - - -<<" <<
                    endl;
            cout << endl << "Id : " <<  this-> id <<
                    endl << "Name : " << this->comp_name <<
                    endl << "Staff Quantity : " << this->comp_revenue <<
                    endl << "Revenue per year : " << this->comp_revenue <<
                    endl << "Imported diamonds : " << this->imported_diamonds <<
                    endl << "Exported diamonds : " << this->exported_diamonds <<
                    endl << "Company CEO : " << this->comp_ceo <<
                    endl << endl;
        		
        		
//        		cout<<"enter the id:"<<endl;
//        		cin>>id;
//        		
//        		cin.ignore();
//        		
//        		cout<<"enter the comp name:"<<endl;
//        		getline(cin,comp_name);
//        		
//        		cout<<"enter the comp staff quantity:"<<endl;
//        		cin>>comp_staff_quantity;
//        		
//        		cout<<"enter the comp revenue:"<<endl;
//        		cin>>comp_revenue;
//				
//				cout<<"enter the imported diamonds: "<<endl;
//				cin>> imported_diamonds;
//				
//				
//				cout<<"enter the exported diamonds:"<<endl;
//				cin>>exported_diamonds;
//				
//				cin.ignore();
//				
//				cout<<"enter the comp ceo:"<<endl;
//				getline(cin,comp_ceo);
				
			}
//			void get()
//			{
//			
//					//cout<<"enter the id:"<<endl;
//                	cout<<"enter the id:"<<endl;
//        		    cin>>id ;     		
//       	    	     cin.ignore();
//        		
//        		cout<<"enter the comp name:"<<endl;
//        		getline(cin,comp_name);
//        		
//        		cout<<"enter the comp staff quantity:"<<endl;
//        		cin>>comp_staff_quantity;
//        		
//        		cout<<"enter the comp revenue:"<<endl;
//        		cin>>comp_revenue;
//				
//				cout<<"enter the imported diamonds: "<<endl;
//				cin>> imported_diamonds;
//				
//				
//				cout<<"enter the exported diamonds:"<<endl;
//				cin>>exported_diamonds;
//				
//				cin.ignore();
//				
//				cout<<"enter the comp ceo:"<<endl;
//			    getline(cin,comp_ceo);
//				
//			}
//			Companies()
//	     	{
//
//            int id, staff, rev, imported, exported;
//            string ceo, name;
//
//            cout << endl << ">>- - - - Comapny Details - - - -<<" << endl;
//            cout << endl << ">>    Id : ";
//            cin >> id;
//            cout << "      Name : ";
//            getline(cin , name);
//            cout << "      Staff Quantity : ";
//            cin >> staff;
//            cout << "      Revenue per year : ";
//            cin >> rev;
//            cout << "      Imported diamonds : ";
//            cin >> imported;
//            cout << "      Exported diamonds : ";
//            cin >> exported;
//            cout << "      Company CEO : ";
//            getline(cin, ceo);
//            
//            set(id,staff,rev,imported,exported,ceo,name);
           // get(id,staff,rev,imported,exported,ceo,name);
            
            
       // }
	
};
                                            
int main()
{
 Companie c1;
	
	int n,i;
	
	
	cout<<"how many compny you want to and add to disply:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		 int id, staff, rev, imported, exported;
          string ceo, name;

            cout << endl << ">>- - - - Comapny Details - - - -<<" << endl;
            cout << endl <<i+1 <<   " Id : ";
           cin >> id;
           cin.ignore();
           cout << "   Name : ";
           getline(cin , name);
          cout << "   Staff Quantity : ";
          cin >> staff;
           cout << "   Revenue per year : ";
           cin >> rev;
           cout << "   Imported diamonds : ";
           cin >> imported;
           cout << "  Exported diamonds : ";
           cin >> exported;
           cin.ignore();
           cout <<  " Company CEO : ";
           getline(cin, ceo);
            
       //	companie(int id, string name,int staff,int rev, int imported, int exported,string ceo,int i)
        		
	}
	
	
	
	return 0;
	
}

