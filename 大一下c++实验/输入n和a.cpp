#include<iostream>
using namespace std;
int main(){
	int n,a,k,s,t=0;
	cout<<"enter n,a"<<endl;
	cin>>n>>a;
	s=a;
	for(k=1;k<n;k++){
	s=s+s*10;
	t=t+s;}
	cout<<t+a; 
		
	
	
} 
