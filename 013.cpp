// Check if a number is in a array
# include <iostream>

using namespace std;

void checkElement(int arr[],int n,int element){

    for(int i=0;i<n;i++){
        if(arr[i]==element){
            cout << "true" << endl;
            return;
        }
        else{
            cout << "false" << endl;
        }
}
    
}

void main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int element = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    checkElement(arr,n,element);
}