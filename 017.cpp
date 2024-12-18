// Count Positive and Negaive numbers are there in an array

#include <iostream>
using namespace std;

int countPositive(int arr[], int size) {
    int PositiveCount = 0;

    for (int i = 0; i < size; i++) { 
        if (arr[i] > 0) {
            PositiveCount++;
        }
    }

    return PositiveCount; 
}


int countNegative(int arr[], int size) {
    int NegativeCount = 0;

    for (int i = 0; i < size; i++) { 
        if (arr[i] < 0) {
            NegativeCount++;
        }
    }

    return NegativeCount; 
}


int main() {
    int arr[5] = {1, 2, -3, 4, -5};
    int size = 5;

    cout << "Positive numbers are: " << countPositive(arr, size) << endl;

    cout << "Negative numbers are: " << countNegative(arr, size) << endl;

    return 0;
}
