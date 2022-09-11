#include <iostream>

using namespace std;

// Class Dec
class Person {
    public:
    Person() {
        cout << "I am inside Person()";
    }
};

int main() {
    Person p1;
    return 0;
}