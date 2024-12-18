// Add element at end of an array

#include <iostream>
using namespace std;

void addElement(int arr[], int n, int element) {
    arr[n] = element;
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 6;
    cout << "Updated array: ";
    addElement(arr, n, element);
    return 0;
}