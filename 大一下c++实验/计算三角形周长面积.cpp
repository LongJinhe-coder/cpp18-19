#include<iostream >
#include<cmath>
using namespace std;
int main(){
	double s,c,x,y,p,z;
	cout<<"��������������";
	cin>>x>>y>>z;
	if(x+y<=z||x+z<=y||y+z<=x)
	cout<<"wrong";
	else{
	c=x+y+z;
	p=c/2.0;
	s=sqrt(p*(p-x)*(p-y)*(p-z));
	cout<<"�������ܳ�="<<c<<"���������="<<s;
}
} 
