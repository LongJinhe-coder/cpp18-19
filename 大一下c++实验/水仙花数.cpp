#include<iostream>
using namespace std;
int main(){
	int x,a,b,c;
	for(x=100;x<=1000;x++)
	{
		a=x%10;b=((x-a)/10)%10;c=(x-b)/100%10;
		if(a*a*a+b*b*b+c*c*c==x)
		cout<<x<<endl;
	}
}
