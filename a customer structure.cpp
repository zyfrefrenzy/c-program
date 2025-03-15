/*a c++ customer sructure code that promps the user to 
enter his or her name accontbalance and last transaction
NAME frenzy gatheru 
REG NO BSE-05-0163/2024
*/
#include<iostream>

using namespace std;

struct customer{
    string name;
    double AccountBalance;
     string LastTransaction;
};

void display(const customer c1){ //const used to a void unnecessary repetition
	cout<<"customer name:"<<c1.name<<endl;
	cout<<"customer Account_Balance:"<<c1.AccountBalance<<endl;
	cout<<"customer Last_Transaction:"<<c1.LastTransaction<<endl;
}

int main(){
	customer c1,c2;//declare customer structure
	string name;
	
	cout<<"enter first customer name:"<<endl;
	cin>>c1.name;
	
	cout<<"enter first customer Account_Balance:"<<endl;
	cin>>c1.AccountBalance;
	
	cout<<"enter first customer Last_Transaction:"<<endl;
	cin>>c1.LastTransaction;

	cout<<endl;
		
	cout<<"enter second customer name:"<<endl;
	cin>>c2.name;
	
	cout<<"enter second Account_Balance:"<<endl;
	cin>>c2.AccountBalance;
	
	cout<<"enter second customer Last_Transaction:"<<endl;
	cin>>c2.LastTransaction;
	
	display(c1);
	display(c2);
	
	return 0;
}

