#include <iostream>
#include <string>


using namespace std;


int main() {
    string firstName = "Saimon";
    string lastName = "Hafiz";
    lastName = lastName.append(firstName);
    cout << lastName;
    cout << "length\n" << lastName.length();
    lastName[5] = ' ';
    cout << lastName;
    return 0;
}