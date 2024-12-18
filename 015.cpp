// remove last element from an array


#include <iostream>
using namespace std;

void removeLastElement(int arr[], int size) {
    
    for (int i = 0; i < size - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int size = 5; 

    cout << "Array after removing the last element: ";
    removeLastElement(arr, size);

    return 0;
}
