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

	int size;
	int *ptr;
	cout<<"Enter number of values you want to store (size off array)"<<endl;
	cin>>size;
	ptr= new int[size];
	cout<<"Enter number of values you want to be storeed "<<endl;
	for(int i=0;i<size;i++){
		cin>>ptr[i];
	}
		
	
	cout<<"Values in the arrayes are:"<<endl;
		for(int i=0;i<size;i++){
		cout<<ptr[i]<<endl;
	}

    return 0;
}



