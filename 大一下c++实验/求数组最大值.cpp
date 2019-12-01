#include<iostream>
using namespace std;
int fun(int a[],int n){
	if(n==1) return a[0];
	else return fun(a,n-1)>a[n-1]?fun(a,n-1):a[n-1] ;
	
}
int main(){
	int n;
	cout<<"enter n";
	cin>>n;
	int a[n],k;
	for(k=0;k<n;k++){
	cout<<"enter a num";
	cin>>a[k];}
	
	cout<<"max="<<fun(a,n);
	return 0;
}
