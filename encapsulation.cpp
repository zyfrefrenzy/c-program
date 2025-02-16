/*
a code that clearly expalains encapsulation
name frenzt gatheru
reg no BSE-05-0163/2024
*/
#include<iostream>
#include<string>
 using namespace std;
 
 class employee{
 	private:
 		string name;
 		int salary;
 		
 		public://setter salary
 			void setsalary(int s){
 				salary=s;
			 }
			 
			 int getsalary(){//getter salary
			  return salary;
			  }
		public:
			  void setname(string n){//setter  for name
			  	name=n;
			  }
			  
			 string getname(){//getter for name
			  	return name;
			  }
			  
			
 };
 int main(){
 	
 	employee employee;
 	employee.setname("frenzy");
 	employee.setsalary(1000000);
 	
 	cout<<"name of the employee is:"<<employee.getname()<<endl;
 	cout<<"the amount of he earns:"<<employee.getsalary()<<endl;
 	
 	return 0;
 }