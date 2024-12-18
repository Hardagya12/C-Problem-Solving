// Function to ddetermine a number is positive , zero or negative

#include <iostream>
#include <string.h>
using namespace std;

int numberChecker( int number){
    if (number>0)
    {
    cout << "Number is positive" << endl;
    }
    else if (number==0)
    {
        cout << "Number is zero" << endl;

    }

    else {
        cout << "Number is negative" << endl;
    }
    
}

int main (){
    numberChecker(0);
}