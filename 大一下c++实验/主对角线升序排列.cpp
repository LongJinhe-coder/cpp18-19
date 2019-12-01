#include<iostream>
using namespace std;
int main(){
	int a[4][4],i,j,k,t;
	cout<<"enter the numbers";
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	cin>>a[i][j];
	for(k=0;k<4;k++)
	if(a[k][k]>a[k+1][k+1])
	t=a[k][k],a[k][k]=a[k+1][k+1],a[k+1][k+1]=t;
	for(i=0;i<4;i++){
	for(j=0;j<4;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
	} 
	
	
} 
