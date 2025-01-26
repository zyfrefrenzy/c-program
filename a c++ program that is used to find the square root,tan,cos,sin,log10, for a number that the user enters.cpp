/*a c++ programm that prompts the user to enter a number
then finds for him or her the square root,cos,sin,tan and
log10 of the number that was written by the user
NAME frenzy gatheru
REG NO BSE-05-0163/2024
*/
#include<iostream>
#include<cmath>//sqrt()tan()cos()sin()log10()

using namespace std;
int main(){
	//the code below prompts the user to enter his or her name
	int number;
	cout<<"enter your number:"<<endl;
	cin>>number;

    cout<<"your number is:"<<number<<endl;
	cout<<"the square root of your number is:"<<sqrt(number)<<endl;
	cout<<"the tan of your number is:"<<tan(number)<<endl;
	cout<<"the sin of your number is:"<<sin(number)<<endl;
	cout<<"the cos of your number is:"<<cos(number)<<endl;
	cout<<"the log10 of your number is:"<<log10(number)<<endl;	
	
	return 0;
}