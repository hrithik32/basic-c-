#include<bits/stdc++.h>
using namespace std;
 class cars{
 	private:
 		//member variable or data member.
 		string company_name;
 		string model_name;
 		string fuel_type;
 		float mileage;
 		double price;
 		
 		public:
 			//member funtion.
 			void setdata(string cname,string model,string fuel,float mil, double pr){
 		 company_name= cname;
 	     model_name= model;
 		fuel_type=fuel;
 		mileage=mil;
 		price=pr;
		 }
		void display(){
			cout<<"Car propaties: "<<endl;
			cout<<"Company name: "<<company_name<<endl;
			cout<<"Car name: "<<model_name<<endl;
			
			cout<<"Car mileage: "<<mileage<<endl;
			cout<<"Car price: "<<price<<endl;
			cout<<"fuel type: "<<fuel_type<<endl;
			}
 		};

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifdef EPSILON
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	cars car1;
	
	car1.setdata("volvo","s","petrol",1000,50000);
	car1.display();


    return 0;
}



