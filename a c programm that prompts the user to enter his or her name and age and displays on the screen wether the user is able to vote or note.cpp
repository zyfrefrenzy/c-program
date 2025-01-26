/*
a c programm that promps the ues to 
enter his or her name and his or her age
then displays the message whether the user is eligible to vote or not
NAME frenzy gatheru
REG NO BSE-05-0163/2024
*/
#include<stdio.h>

int main(){
    char name;
	printf("enter your name:");
	scanf("%s",&name);
	
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	
	if(age>=18){
		printf("your are able to vote");
	}else{
		printf("your are not able to vote");
		
	}
	
	return 0;
}