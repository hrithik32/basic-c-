#include<iostream>
#include<fstream>
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
	char arr[100];
	cout<<"Enter yourn number and age "<<endl;
	cin.getline(arr, 100);
	
	ofstream myfile("mnm.txt");
	myfile<<arr;
	myfile.close();
	cout<<"File writing completed succesfully"<<endl;
	
	cout<<"File reading started succesfully"<<endl;
	char arr1[100];
	ifstream obj("mnm.txt");
	obj.getline(arr1,100);
	cout<<"array content "<<arr1<<endl;
	obj.close();
	

    return 0;
}



