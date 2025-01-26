/* a c++ program that gives the area of a circle,
simple intrest and sum of numbers
NAME frenzy gatheru
REG NO BSE-05-0163/2024
*/
#include<iostream>
using namespace std;


//function prototype
float addition(int x,int y);
double simple_interest(int principle,float rate ,int time);
double area_of_a_circle(double pi,double radius);

int main(){
	float sum ,interest,area;

	sum=addition(10,20);
	interest=simple_interest(5000,0.2,4);
	area=area_of_a_circle(3.14,7);
	
	cout<<"sum:"<<sum<<endl;
	cout<<"simple interest:"<<interest<<endl;
	cout<<"area of the circle:"<<area<<endl;
	
	return 0;
}
// functions of addition
float addition(int x,int y){
	int sum;
	sum=x+y;
	return sum;
	
}
//function for simple_intrest
double simple_interest(int principle,float rate ,int time){
double interest;
interest=principle *rate *time;
return interest;
}

//function of area of a circle
double area_of_a_circle(double pi,double radius){
double area;
area=pi*radius*radius;
return area;
}
