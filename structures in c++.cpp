#include<bits/stdc++.h>
using namespace std;

struct person{
	char name[100];
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
	cout<<"person details"<<endl<<"enter person name: "<<endl;
	cin.getline(p1.name,100);
	cout<<"Enter age "<<endl;
	cin>>p1.age;
	cout<<endl<<"Enter salary"<<endl;
	cin>>p1.salary;
	
	cout<<endl<<"Person details are as follows : "<<endl;
	cout<<"Person name "<<p1.name<<endl;
	cout<<"Person age "<<p1.age<<endl;
	cout<<"Person salary "<<p1.salary<<endl;

    return 0;
}



