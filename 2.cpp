#include <iostream>
using namespace std;
int main(){
	int p,t,r,i;
	cout<<"Enter Principle amount, interest rate and timeperiod: " <<endl;
	cin>>p>>r>>t;
	i = (p*t*r)/100;
	cout<< "Simple Interest : " << i <<endl;
	
}
