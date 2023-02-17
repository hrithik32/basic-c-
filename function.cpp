#include<bits/stdc++.h>
using namespace std;

int maxi(int a,int b){
	if(a>b)
	{
		return a;
	}
	else
	return b;
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
cout<<"Enter x and y"<<endl;
int x,y,z;
cin>>x>>y;

z=maxi(x,y);
cout<<z;

    return 0;
}



