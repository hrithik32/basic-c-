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
 int num,f=0,s=1,next;
 cin>>num;
 cout<<"fibonacci serise is:"<<endl;
 for(int i=0;i<num;i++){
 	cout<<f<<endl;
 	next=f+s;
 	f=s;
 	s=next;
 }

    return 0;
}



