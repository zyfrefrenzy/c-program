/*A C++ structure for a patient
that promps the user to enter his or her name,age and diagnosis
NAME frenzy gatheru
REG NO BSE-05-0163/2024
*/
#include<iostream>
using namespace std;




struct patient{
	string name;
	int age;
	string diagnosis;

};

void display(const patient pl){//used to avoid unnecessary copying
	cout<<"patient name:"<<pl.name<<endl;
	cout<<"patient age:"<<pl.age<<endl;
	cout<<"patient diagnosis:"<<pl.diagnosis<<endl;
}
  int main(){
patient p1;//declare patient structure
	string name;
	
	cout<<"enter patient name:"<<endl;
	cin>>p1.name;
	
	cout<<"enter patient age:"<<endl;
	cin>>p1.age;
	
	cout<<"enter patient diadnosis:"<<endl;
	cin>>p1.diagnosis;
	
	
	display (p1);	
	
	return 0;
}