#include <iostream>
using namespace std;
int main(){
	signed int temperature=-38; 
	unsigned int satellite_count=4; 
	short int astro_age=45; 
	long long int distance= 57842345678901; 
	double rocket_fuel= 5678.956374289; 
	long double pi=3.1435780256789;
	char mission_grade='A';
	bool communication_status=true;
	
	cout<<"The temperature is: "<<temperature<< endl;
	cout<<"The satellite count is: "<<satellite_count<< endl;
	cout<<"The age of an astronaut is: "<<astro_age<< endl;
	cout<<"The distance from launch site to stars is: "<<distance<<endl;	
	cout<<"The fuel consumption of rocket is: "<<rocket_fuel<<endl;
	cout<<"The value of pi is: "<<pi<< endl;
	cout<<"The status of launch mission is: "<<mission_grade<< endl;
	cout<<"The communication status is: "<<communication_status<< endl;

	return 0;
}
