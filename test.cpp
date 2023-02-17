#include<iostream>
#include<fstream>
using namespace std;

my_divition(float x,float y){
	if(y==0){
		throw"Cannot devided by 0";
		
	}
	return(x/y);
}

int main(){
	float x=10;
	float y=2;
	float z;
	try{
		z=my_divition(x,y);
		cout<<z;
	}catch(const char*warning){
		cerr<<warning;
	}
}
