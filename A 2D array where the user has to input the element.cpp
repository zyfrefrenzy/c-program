/*A 2D array
NAME FRENZY GATHERU
REG NO BSE-05-0163/2024
*/
#include<iostream>
using namespace std;

const int ROWS =3;
const int COLUMNS =3;

#define INPUT_ELEMENT(arr,i,j)\
cout<<"enter element["<<i<<"]["<<j<<"]:";\
cin>>arr[i][j];

int main(){
    int array[ROWS][COLUMNS];
    //Input elements using macro
    for (int i=0;i<ROWS;i++){
        for(int j=0;j<COLUMNS;j++){
            INPUT_ELEMENT(array, i ,j);
        }
    }
    //display the array 
    cout<<"the 2D array entered:\n";
    for(int i =0;i<ROWS;i++){
        for(int j =0;j<COLUMNS;j++){
            cout<<array [i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}

