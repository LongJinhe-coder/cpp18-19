#include<iostream>
using namespace std;
int main(){
	int a[6][6],k,i,j,n,m;
	for(k=0;k<6;k++)
	a[k][0]=a[k][k]=1;
	for(i=2;i<6;i++)
	for(j=1;j<=i-1;j++)
	a[i][j]=(a[i-1][j-1]+a[i-1][j]);
	for(m=0;m<6;m++){
	
	for(n=0;n<m+1;n++)
	cout<<a[m][n]<<"   ";
	cout<<endl;}

}
