#include<iostream>
using namespace std;
int fun(int a[],int n){
	int i,j,t;
	for(i=0;i<2;i++)
	for(j=0;j<n;j++)
	if(a[j]>a[j+1])
	t=a[j],a[j]=a[j+1],a[j+1]=t;
	return a[n-2];
}
int main(){
	int n,k;
	cout<<"enter n=";
	cin>>n;
	int a[n];
	for(k=0;k<n;k++)
	{
		cout<<"enter a number:";
		cin>>a[k];
	}
	cout<<"the second largest is"<<fun(a,n)<<endl;
	return 0;
}
