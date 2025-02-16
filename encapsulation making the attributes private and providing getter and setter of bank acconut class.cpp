/*
NAME frenzy gatheru
REG NO BSE-05-0163/2024
modified class to apply proper encapsultion by making attributes 
private and providing getter and setter metthods
*/
#include<iostream>
#include<string>

using namespace std;

class BankAccount{
	
	private:
		string accountHolder;
		double balance;
		
		public:
			//setter for account holder
			void setaccountHolder(string holder){
				accountHolder=holder;
				
			}
			//getter for account holder
			string getaccountHolder(){
				return accountHolder;
			}
			
				//setter for balance
				void setbalance(double amount){
					balance=amount;
					
				}
				//getter for balance
				double getbalance(){
					return balance;
				}
				
};
int main(){
	BankAccount account;
	account.setaccountHolder("frenzy");
	account.setbalance(1000000);
	
	cout<<"the name of the accountholder is:"<<account.getaccountHolder()<<endl;
	cout<<"the balance in the account is:"<<account.getbalance()<<endl;
	
	return 0;
}