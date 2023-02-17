#include<bits/stdc++.h>
using namespace std;
  struct person{
 	string name;
	int age;
	double salary;
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
	person p1;
	person *ptr=&p1;
		cout<<"enter person details like name,age,salary"<<endl;
		cin>>ptr->name;
		cin>>ptr->age;
		cin>>ptr->salary;

	cout<<endl<<"Person details are as follows : "<<endl;
	cout<<"Person name "<<ptr->name<<endl;
	cout<<"Person age "<<ptr->age<<endl;
	cout<<"Person salary "<<ptr->salary<<endl;

    return 0;
}



