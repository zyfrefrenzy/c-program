/*c++ structure
NAME frenzy gatheru
REG NO BSE-05-0163/2024
*/
#include<iostream>
using namespace std;

struct student{
	string name;
	int ID;
	string email;
	int DOB;
	float GPA;
	
};

void display(const student sl){
	cout<<"stuent  name:"<<sl.name<<endl;
	cout<<"student Id:"<<sl.ID<<endl;
	cout<<"student  email:"<<sl.email<<endl;
	cout<<"student  date of birth:"<<sl.DOB<<endl;
	cout<<"student  GPA:"<<sl.GPA<<endl;
}

	


int main(){
	

	
	cout<<"Addresses"<<endl;
	student sl={"frenzy",606720890,"frenzyzyfre@gmail.com",2004,6.7};
	cout<<"stuent 1 name:"<<&sl.name<<endl;
	cout<<"student 1 Id:"<<&sl.ID<<endl;
	cout<<"student 1 email:"<<&sl.email<<endl;
	cout<<"student 1 date of birth:"<<&sl.DOB<<endl;
	cout<<"student 1 GPA:"<<&sl.GPA<<endl;
	
	cout<<endl;
	
	student s2={"jose",123456,"gta@gmail.com",2000,7.2};
    cout<<"student 2 name:"<<&s2.name<<endl;
	cout<<"student 2 Id:"<<&s2.ID<<endl;
	cout<<"student 2 email:"<<&s2.email<<endl;
	cout<<"student 2 date of birth:"<<s2.DOB<<endl;
	cout<<"student 2 GPA:"<<&s2.GPA<<endl;
	
	
	cout<<endl;
	
	
	cout<<"memory"<<endl;
	cout<<"size of string:"<<sizeof(string)<<endl;
	cout<<"size of int:"<<sizeof(int)<<endl;
	cout<<"size of float:"<<sizeof(float)<<endl;
	cout<<"size  of the struct: student:"<<sizeof(student);
	
	cout<<endl;
	student s3={"moses",5463,"sa@gmail.com",1999,3.4};
	
	
	
     display(sl);
	display(s2);
	display(s3);
	
	
	
	
	return 0;
}