/* a c++ programm that prompts the user
to enter radius and height as one suches for the volume of a
cylinder
NAMEfrenzy gatheru
REG NO BSE-05-0163/2024
*/
#include<iostream>
using namespace std;
int main(){
	
	//radius of the cylinder
	float radius;
	cout<<"enter the radius of the cylinder:";
	cin>>radius;
	
	//height of the cylinder
	int height;
	cout<<"enter the height of the cylinder:";
	cin>>height;
	
	//volume of the cylinder
	const double PI=3.142;
	double volume;
	volume =PI * radius * radius* height;
	cout<<"your volume is:"<<volume;
	
	return 0;
}