#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter Number 1";
    cin>>n1;
    cout<<"Enter Number 2";
    cin>>n2;
    cout<<"Enter Number 3";
    cin>>n3;

    if((n1+n2==n3) || (n2+n3==n1) || (n1+n3==n2)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}