#include <bits/stdc++.h>

using namespace std;

class Student {
    public:
        int roll;
        string name;
        string dept;
        int series;
        Student(int x, string a, string b, int y);
};

Student::Student(int x, string a, string b, int y) {
    roll = x;
    name = a;
    dept = b;
    series = y;
}

int main() {
    Student i(47, "saimon", "ece", 20);
    cout << i.roll << i.name << i.dept << i.series << endl;
    return 0;
}