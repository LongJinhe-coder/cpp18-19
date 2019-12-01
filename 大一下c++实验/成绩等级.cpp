#include<iostream>
using namespace std;
int main() {
	int n,k,score;
	cout<<"input your score";
	cin>>score;
	k=score/10;
	switch(k){
		case 10:
		case 9:cout<<"A";break;
		case 8:cout<<"B";break;
		case 7:cout<<"C";break;
		case 6:cout<<"D";break;
		default:cout<<"no pass";
	}
}
