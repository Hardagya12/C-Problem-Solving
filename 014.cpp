// Add element at beginning of an array

#include <iostream>
using namespace std;

void addElement(int arr[], int size, int element) {
    arr[0] = element;
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << " ";
    }
}

int main (){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 0;
    cout << "Updated array: ";
    addElement(arr, size, element);
    return 0;
}