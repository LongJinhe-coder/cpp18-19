#include<iostream>
using namespace std;
int main(){
	int line,row;
	for(line=1;line<=9;line++){
	for(row=1;row<=line;row++)
	cout<<row<<"*"<<line<<"="<<row*line<<" ";
	cout<<endl;
}
} 
