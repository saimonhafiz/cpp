// Use of getline() push_back() and pop_back()
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s << endl;
    s.push_back('!');
    s.push_back('!');
    cout << s << endl;
    s.pop_back();
    s.pop_back();
    cout << s << endl;
    return 0;
}
