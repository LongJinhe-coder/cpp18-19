#include<iostream>
using namespace std;
bool fun(int n)
{
	int i,j,result=true;
	for(j=2;j<n;j++)
	if(n%j==0){
	result=false;
	break;
}
return result;
 } 
 int main(){
 	int k;
 	for(k=10;k<=100;k++)
 	if(fun(k)==true)
 	cout<<k<<" ";
 }
