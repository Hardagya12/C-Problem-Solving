// Check if array is in ascending order or not
#include <iostream>
using namespace std;

bool AscendingOrder(int arr[],int size){
    for(int i=1;i<size;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
       
       
    }
     return true;
}

int main (){
    int arr[5]={1,2,3,4,5};
    int size = 5;
    if(AscendingOrder(arr,size)){
        cout << "True";
    }
    return 0;
} 