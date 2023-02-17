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
 cout<<" Enter a value "<<endl;
 int x,fact;
 cin>>x;
 fact=x;
 while(x>1){
 	x--;
 	fact*=x;
 }

cout<<fact;

    return 0;
}



