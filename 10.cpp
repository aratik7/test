 //Program to demonstrate pointer declaration and dereferencing
#include<iostream>
using namespace std;
int main(){ 
	int num=80;
	int *ptr = &num;//pointer declaration and intilization

	cout<<"The integer value is: "<<num<<endl;
	cout<<"The address is: "<<ptr<<endl;
	cout<<"The value using pointer variable is: "<<*ptr;
	return 0;
}
