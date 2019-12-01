#include<iostream>
using namespace std;
int main(){
	int a[3][3],b[9],i,j,k;
	cout<<"enter nine number"<<endl;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
	cin>>a[i][j];
	b[j+i*3]=a[i][j];
}
for(k=0;k<9;k++)
cout<<b[k]<<" ";
}
