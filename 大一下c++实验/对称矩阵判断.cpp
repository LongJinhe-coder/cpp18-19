#include<iostream>
using namespace std;
bool fun(int a[n][n]){
	int i,j,anser=true;
	for(i=0;i<n;i++)
	for(j=0;j<n-1;j++)
	if(a[i][j]!=a[j][i]){
		anser=false;break;
	}
	return anser;
	
} 
void main(){
	cout<<"enter n";
	cin>>n;
	int a[n][n],i,j;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		cout<<"enter a num";
		cin>>a[i][j];
	}
	if(fun(a)==ture)
	cout<<"是对称矩阵";
	if(fun(a)==false)
	cout<<"不是对称矩阵";
	return 0; 
}
