#include<iostream>
using namespace std;
int main(){
	int a[10],i,j,t;
	cout<<"enter 10 number";
	for(i=0;i<10;i++)
	cin>>a[i]; 
	for(i=0;i<10;i++)
	for(j=0;j<10-i;j++)
	if(a[j]>a[j+1])
	t=a[j],a[j]=a[j+1],a[j+1]=t;
	for(i=0;i<10;i++)
	cout<<a[i]<<" ";
} 
