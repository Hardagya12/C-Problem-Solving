// Average of array elements

#include <iostream>
using namespace std;

int arrayAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int average = arrayAverage(arr, 5);
    cout << "Average of array elements: " << average << endl;
    return 0;
}