#include<iostream>
using namespace std;
int main(){
	int a[10],i,j,index,t;
	cout<<"enter 10 number";
	for(i=0;i<10;i++)
	cin>>a[i];
	for(i=0;i<10;i++){ 
	index=0;
	for(j=0;j<10-i;j++)
	if(a[index]<a[j])
	index=j;
	t=a[index],a[index]=a[9-i],a[9-i]=t;
}
for(i=0;i<10;i++)
cout<<a[i]<<" ";
	
	
	
	
} 
