/*a c++ progrem for class car
NAME frenzy gatheru
REG NO BSE-05-0163/2024
*/ 
#include<iostream>
#include<string>

using namespace std;
     class car{//i have defined  my class named car here
           public:
           	string brand;
           	string model;
           	double price;
           	int mileage;
           	/*here above are the public names*/
           	//a costructor to initialize these data members
           	car(string b,string m,double p,int miles){
           		brand=b;
           		model=m;
           		price=p;
           		mileage=miles;
			   }
			   string display(){
			   	return"brand:"+brand+"\nmodel:"+model+"\nprice:"+to_string(price)+"\nmileage:"+to_string(mileage)+"miles\n";
			   ;
		}
			
			   	int drive(int distance){
			   		mileage+=distance;
			   		return mileage;//function for increasing the mileage by that amount and display the updated mileage
				   }
			   
			
     	
	 };
	 int main(){
	 	car myCar("toyota","corolla",20000,5000);//object creating
	 	//display initial details
        cout<<myCar.display();
        
        
        //updating mileage and displaying new mileage
	 	cout<<"updating mileage:"<<myCar.drive(150)<<"miles"<<endl;
	    cout<<"updating mileage:"<<myCar.drive(300)<<"miles"<<endl;
	 	
	 	
	 	return 0;
	 	
	 }
