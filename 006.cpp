#include <iostream>
using namespace std;

bool checkLogin(string username, string password) {
    if (username == "admin" && password == "1234") {
        cout << "Login successful" << endl;
        return true;
    } else {
        cout << "Login failed" << endl;
        return false;
    }
}

int main () {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    checkLogin(username, password);
}
