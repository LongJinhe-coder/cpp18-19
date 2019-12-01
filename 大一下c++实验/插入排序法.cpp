#include<iostream>
using namespace std;
int main(){
	int a[10],i,j,t;
	for(i=0;i<10;i++){
	cout<<"enter a number"<<endl;
	cin>>a[i];t=a[i];
	for(j=i-1;j>=0;j--){
	if(t<a[j])
	a[j+1]=a[j];
	else {
	a[j+1]=t;break;
}
}
if(t<a[0])
a[0]=t;
}
for(i=0;i<10;i++)
cout<<a[i];
	
} 
