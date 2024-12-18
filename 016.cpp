// Check if all numbers ina n array are positive or negative

// #include <iostream>
// using namespace std;

// void checkPositive(int arr[], int n) {
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             cout << "Negative" ;
//         }
//         else{
//             cout << "Positive";
//         }

//     }
// }

// int main (){
//     int arr[5]={1,3,5,7};
//     int n =5;

//     checkPositive(arr ,5);

// }

#include <iostream>
using namespace std;

bool checkPositive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (checkPositive(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
