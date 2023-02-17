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
	 
	person p[10];
	cout<<"enter person details like name,age,salary"<<endl;
	
	for(int i=0;i<2;i++){
		cin>>p[i].name;
		cin>>p[i].age;
		cin>>p[i].salary;
	}
		cout<<endl<<"Person details are as follows : "<<endl;
	for(int i=0;i<2;i++){
		cout<<"Person name "<<p[i].name<<endl;
	cout<<"Person age "<<p[i].age<<endl;
	cout<<"Person salary "<<p[i].salary<<endl<<endl;
	}

    return 0;
}



