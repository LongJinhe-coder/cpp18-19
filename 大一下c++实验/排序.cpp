#include<iostream>
using namespace std;
int main(){
	int a[3][3],i,j,k,max,m,n;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
	cout<<"enter a number";
	cin>>a[i][j]; }
	for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	cout<<a[i][j]<<"  ";
	cout<<endl;}
	cout<<endl;
	for(n=0;n<8;n++)
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
	
		if(j==2&&i<=2){
			if(a[i][j]>a[i+1][0])
			max=a[i][j],a[i][j]=a[i+1][0],a[i+1][0]=max;
			
			
		}
	if(j!=2){
	if(a[i][j]>a[i][j+1])
	max=a[i][j],a[i][j]=a[i][j+1],a[i][j+1]=max;
	
}
	

}
for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	cout<<a[i][j]<<"  ";
	cout<<endl;}
}
	
