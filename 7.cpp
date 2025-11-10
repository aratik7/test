//program to read full name using getline()
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string name;
	cout<<"Enter your name: "<<endl;
	getline(cin,name);
	cout <<"My name is : "<<name;
	return 0;
}
