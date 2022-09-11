#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "I am fine";
    string &b = a; // Reference => Constant Pointer
    cout << a;
    cout << "\n" << b;
    // Pointer
    string *c;
    c = &a;
    cout << &c;
}