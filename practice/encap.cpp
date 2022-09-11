#include <bits/stdc++.h>

using namespace std;

class Employee {
    int salary;
    public:
        void setSalary(int s);
        int getSalary();
};
void Employee::setSalary(int s) {
    salary = s;
}
int Employee::getSalary() {
    return salary;
}
int main() {
    Employee Me;
    Me.setSalary(100);
    cout << Me.getSalary() << endl;
    return 0;
}