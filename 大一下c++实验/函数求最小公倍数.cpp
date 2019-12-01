#include<iostream>
using namespace std;
int fun(int x,int y)
{
	int k,times;
	if(x<y)
	k=x,x=y,y=k;
	times=1;
	while(times*x%y!=0)
	{
		times++;
	}
	return x*times;
 } 
 int main(){
 	cout<<" enter two numbers";
 	int a,b;
 	cin>>a>>b;
 	cout<<"最小公倍数="<<fun(a,b);
 	return 0;
 }
