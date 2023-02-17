#include<iostream>s
using namespace std;
int main(){
	int x=5;
	int *p;
	p=&x;
	cout<<"p ="<<p<<endl;
	cout<<"*p ="<<*p<<endl;
	*p=6;
	int **q;
	q=&p;
	
	cout<<"*q ="<<*q<<endl;
	cout<<"**q ="<<**q<<endl;
	
	int ***r;
	r=&q;
	cout<<"**r ="<<**r<<endl;
	cout<<"***r ="<<***r<<endl;
	
	***r=10;
	cout<<x<<endl;
	**q=x+2;
	cout<<x;
	return 0;
}
