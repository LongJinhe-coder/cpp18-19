#include<iostream>
using namespace std;
int main(){
	int k,n;
	for(k=10;k<=100;k++){ 
	for(n=2;n<k;n++)
	if(k%n==0) break;
	if(n==k)
	cout<<k<<" ";} 
	
} 
