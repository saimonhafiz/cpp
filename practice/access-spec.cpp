#include <bits/stdc++.h>

using namespace std;

class MyClass {
    public:
        int x;
    private:
        int px;
};
int main() {
    MyClass newObj;
    newObj.x = 10;
    newObj.px = 11;
    cout << newObj.px << endl;
    return 0;
}