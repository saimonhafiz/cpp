#include <bits/stdc++.h>

using namespace std;

class MyClass {  // The class
        public: // Access specifier
            int myNum;  // Attribute
            string myString;  // Attribute
    };

int main() {
    MyClass myObj;
    myObj.myNum = 47;
    myObj.myString = "saimon";
    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;
    return 0;
}