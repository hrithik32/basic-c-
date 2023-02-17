 #include<iostream>
 using namespace std;
 
 int main(){
 	int a[3][3];
 	int b[3][3];
 	int c[3][3];
 	
 	int n=1;
 	int m=10;
 	
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			a[i][j]=n;
 			n++;
		 }
	 }
	 cout<<"Values of arry A :"<<"\n";;
	 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			cout<<a[i][j]<<" ";
 			
		 }cout<<"\n";
	 }
	 
	 
	 for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			b[i][j]=m;
 			m++;
		 }
	 }
	 cout<<"Values of arry B :"<<"\n";;
	 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			cout<<b[i][j]<<" ";
 			
		 }cout<<"\n";
	}
		 
		 for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 		 c[i][j]= a[i][j]+b[i][j];
		 }
	 }
	 cout<<"Values of arry C:"<<"\n";;
	 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			cout<<c[i][j]<<" ";
 			
		 }cout<<"\n";
	 }
return 0;
 }
