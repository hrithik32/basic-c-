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
 cout<<"Enter x and y"<<endl;
	int x,y,temp;
	cin>>x>>y;
	
	cout<<"Before swaping "<<x<<" "<<y<<endl;
	
	temp=x;
	x=y;
	y=temp;
	cout<<"After swaping "<<x<<" "<<y<<endl;


    return 0;
}



