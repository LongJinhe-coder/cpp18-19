#include<iostream>
using namespace std;
int main(){
	int n,k,i,j;
	cout<<"enter n";
	cin>>n;
	int a[n][n];
	for(k=0;k<n;k++)
	a[k][0]=k+1;
	for(i=0;i<n;i++)
	for(j=1;j<n;j++)
	a[i][j]=a[i][j-1]%n+1;
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
	
}
}
