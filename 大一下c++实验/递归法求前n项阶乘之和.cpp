#include<iostream>
using namespace std;
int fun1(int n)
{
	if(n==1)
	return 1;
	else return fun1(n-1)*n;
}
int fun2(int n){
if(n==1)
return fun1(1);
else return fun2(n-1)+fun1(n);
}
int main(){
	int n; 
	cout<<"enter n=";
	cin>>n;
	cout<<fun2(n);
	return 0;
}
