#include <bits/stdc++.h>

using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
};

int main() {
    Car car1;
    car1.brand = "bmw";
    car1.model = "Y6";
    car1.year = 2020;
    Car car2, car3;
    car2.brand = "audi";
    car3.brand = "mercedes";
    car2.model = "s2";
    car3.model = "X5";
    car2.year = 2019;
    car3.year = 2001;
    cout << car2.brand << endl;
    cout << car3.year << endl;
    return 0;
}