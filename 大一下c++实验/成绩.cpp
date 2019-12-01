#include<iostream>
using namespace std;
int main(){
	int score;
	cout<<"enter your score ";
	cin>>score;
	if(score>100)
	cout<<"enter again";
	else if(score>=90)
	cout<<"excellent";
	else if(score>=80)
	cout<<" good";
	else if(score>=70)
	cout<<"soso";
	else if(score>=60)
	cout<<"passed";
	else cout<<"you failed the exam";
}
