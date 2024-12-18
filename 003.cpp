//  Function that takes 3 sides of a triangle and checks whether it is equilateral, isosceles or scalene.

#include <iostream>
using namespace std;

int triangleidentifier(int a, int b, int c) {

    if (a == b && b == c) {
        return 1; // equilateral
    } else if (a == b || b == c || c == a) {
        return 2; // isosceles
    } else {
        return 3; // scalene
    }
}

int main () {
    int result = triangleidentifier(2, 2, 2);

    switch (result) {
        case 1:
            cout << "The triangle is equilateral." << endl;
            break;
        case 2:
            cout << "The triangle is isosceles." << endl;
            break;
        case 3:
            cout << "The triangle is scalene." << endl;
            break;
    }

    return 0;
}

