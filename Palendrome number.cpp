#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifdef EPSILON
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 cout<<" Enter a number "<<endl;
 int num;
 cin>>num;
 int n,digit,rev=0;
 
 n=num;
 while(num!=0){
 	digit=num%10;
 	rev=(rev*10)+digit;
 	num/=10;
 }
if(n==rev){
	cout<<"Palendrome"<<endl;
}else{
	cout<<"Not Palendrome"<<endl;
}

    return 0;
}



