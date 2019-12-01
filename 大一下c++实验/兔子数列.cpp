#include<iostream>
using namespace std;
int main(){
	int a=1,b=1,c,n,k,s=1;
	cout<<"enter n=";
	cin>>n;
	for(k=2;k<=n;k++)
	{c=a+b;
	s=s+b;
	a=b,b=c;
	
	
	}
	if(n==1)
	cout<<s;
	else cout<<s;
	
} 
