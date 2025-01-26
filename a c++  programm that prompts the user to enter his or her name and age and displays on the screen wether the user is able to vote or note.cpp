/*

a c++ programm to prompt user to
enter his or her name and age then display on the screen if the user
is able to vote or note
NAME frenzy batheru
REG NO BSE-05-0163/2024
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
	string name;
	cout<<"enter your name:"<<endl;
	cin>>name;
	
    int age;
    cout<<"enter your age:";
    cin>>age;
    
    if(age>=18){
    	printf("your are able to vote");
	}else{
		printf("you are not able to vote");
	}
    
	
	return 0;
}

