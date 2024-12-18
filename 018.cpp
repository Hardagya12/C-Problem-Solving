#include <iostream>
using namespace std;

int EvenIndexNumbers(int arr[],int size){

    for(int i=0; i<size ;i++){
        if(i!=0){
        if(i%2==0){
            cout << arr[i];
        }

    }
    }
}

int main (){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    cout << "Even Array Elements are:";
    EvenIndexNumbers(arr,size);
}