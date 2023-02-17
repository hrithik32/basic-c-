#include<bits/stdc++.h>
using namespace std;
 void passbyvalue(int x,int y){
	int z;
	z=x;
	x=y;
	y=z;
}

void passbyreference(int &x,int &y){
	int z;
	z=x;
	x=y;
	y=z;
}

void passbyadress(int *x,int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifdef EPSILON
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int a,b;
	cin>>a>>b;
	
	cout<<" Before swaping "<<a<<" "<<b<<endl;
	passbyvalue(a,b);
	cout<<" After swaping by value "<<a<<" "<<b<<endl;

cout<<endl;
cout<<endl;

	cout<<" Before swaping "<<a<<" "<<b<<endl;
	passbyreference(a,b);
	cout<<" After swaping by referance "<<a<<" "<<b<<endl;
	cout<<endl;
	cout<<endl;
	cout<<" Before swaping "<<a<<" "<<b<<endl;
	passbyadress(&a,&b);
	cout<<" After swaping by adress "<<a<<" "<<b<<endl;

    return 0;
}



