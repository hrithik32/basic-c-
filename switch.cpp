#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter any Number Between 1-7"<<endl;
	cin>>num;
	
	switch(num){
		case 1:
			cout<<"SAT";
			break;
			case 2:
			cout<<"SUN";
			break;
			case 3:
			cout<<"MON";
			break;
			case 4:
			cout<<"TUE";
			break;
			case 5:
			cout<<"WED";
			break;
			case 6:
			cout<<"THUS";
			break;
			case 7:
			cout<<"FRI";
		break;
		default:
			cout<<"Invided Key";
			break;
	}
	return 0;
}
