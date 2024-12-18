#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);


    cout << "Array after removing duplicates: " ;
    removeDuplicates(arr, n);
    cout << endl;

    return 0;
}