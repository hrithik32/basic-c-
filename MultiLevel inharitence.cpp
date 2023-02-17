#include<iostream>
using namespace std;

class Grandparent{
	public:
		string name;
		void get_name(string n){
			name=n;
		}
		void put_name(){
			cout<<"\nName is : "<<name;
		}
};
 class Parent: public Grandparent{
 	public:
 	 int age;
 	  void get_age(int a){
 	  	age=a;
	   }
	   void put_age(){
	   	cout<<"\nAge is :"<<age;
	   }
 };
class Child:public Parent{
	public:
	string gender;
	void get_gender(string b){
		gender=b;
		
	}
	void put_gender(){
		cout<<"\nGender is :"<<gender;
	}
};



int main(){

Child c1;
c1.get_name("Laal");
c1.get_age(15);
c1.get_gender("Male");

c1.put_name();
c1.put_age();
c1.put_gender();
	return 0;
}
