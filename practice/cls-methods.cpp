#include <bits/stdc++.h>

using namespace std;

class MyClass{
    public:
        void myMethod() {
            
            cout << "Hello from myMethod";
        }
};
int main() {
    MyClass newObj;
    newObj.myMethod();
    return 0;
}