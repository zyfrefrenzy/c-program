#include<iostream>
#define SIZE 5 //macro to define array size 


using namespace std;

int main(){
    int arr[SIZE];//Macro defined size array 
    
    cout<<"enter element"<<SIZE<<"element:\n";
    for(int i=0;i<SIZE;i++){
        cout<<"element"<<i+1<<":";
        cin>>arr[i];//store user input
    }
    
    cout<<"Array element:";
    for(int i=0;i<SIZE;i++){
        cout<<arr[i]<<" ";//display array element
    }
    return 0;
}
