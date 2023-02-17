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

 	int numerator,denominator,result;
 	cout<<" Enter numerator and denominator number"<<endl;
 	cin>> numerator>>denominator;
 	try{
 		if(denominator==0){
 			throw denominator;
 			
		 } result= numerator/denominator;
	 }
	 catch(int ex){
	 cout<<" Exception: devided by zero is not allowed"<<ex<<endl;	
	 }

	cout<<"division is "<<result;
    return 0;
}



