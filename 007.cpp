#include <iostream>
using namespace std;

void trafficLight(string color) {
    if (color == "red") {
        cout << "Stop" << endl;
    } else if (color == "yellow") {
        cout << "Slow down" << endl;
    } else if (color == "green") {
        cout << "Go" << endl;
    }
}

int main () {
    string color;
    
    cout << "Enter the traffic light color (red, yellow, green):";
    cin >> color;

    trafficLight(color);

    return 0;
}