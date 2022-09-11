#include <bits/stdc++.h>

using namespace std;

class MyClass {
    public:
        int myFunc(int a);
};



int main() {
    
    MyClass newObj;
    int a = newObj.myFunc(5);
    cout << a;
    return 0;
}
int MyClass::myFunc(int a) {
    return a;
}