/*a c++ code with the base class named AccountHolder
NAME Frenzy Irimu
REG NO BSE-05-0163/2024
*/
#include<iostream>

using namespace std;
//base class
class AccountHolder{
protected:
    string name;//to represent account holder's name

    public:
    AccountHolder(string n){
    name=n;
    }
    //setter for name
    void setName(string n){
    name=n;
    }
    //getter for name
    string getName(){
    return name;
    }
};
//derived class bank account
class BankAccount:public AccountHolder{
private:
int accountNumber;
double balance;

public:
//construct to initialize name,accountNumber anad balance
BankAccount(string n,int accNum,double bal)
:AccountHolder(n),accountNumber(accNum),balance(bal){}

//getter for account
int getAccountNumber(){
return accountNumber;
}
//getter for balance
double getBalance(){
return balance;
}
};
//dervived class savings account
class SavingsAccount:public BankAccount{
private:
double interestRate;

public:
//constructor to initialize name,aaccountNumber,balance and interestRate
SavingsAccount(string n,int accNum,double bal,double rate)
:BankAccount(n,accNum,bal),interestRate(rate){}

//getter for interest
double getInterestRate(){
return interestRate;
}
};
int main(){
//creating object
SavingsAccount myAccount("frenzy irimu",100000,5000.0,2.5);

//display
cout<<"Account Holder:"<<myAccount.getName()<<endl;
cout<<"Account Number:"<<myAccount.getAccountNumber()<<endl;
cout<<"balance:"<<myAccount.getBalance()<<endl;
cout<<"interest Rate:"<<myAccount.getInterestRate()<<"%"<<endl;

return 0;
}
