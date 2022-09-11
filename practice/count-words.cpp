#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "How many words will you give to test?";
    cin >> n;
    string sen;
    string words[n];
    for(int i=0;i<n;i++) {
        cin >> words[i];
    }
    for(int i=0;i<n;i++) {
        cout << words[i];
    }
    cout << "Enter the sentence to test:";

    getline(cin, sen);
    cout << sen;

    return 0;
}
