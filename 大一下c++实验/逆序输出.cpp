#include<iostream>
using namespace std;
void display(int a[],int n){
	int k;
	for(k=n-1;k<=0;k--)
	cout<<a[k]<<" ";
}
int main(){
int a[]={1,2,3,4,5};
	display(a,sizeof(a)/sizeof(int));
	return 0;
}
