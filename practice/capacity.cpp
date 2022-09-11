#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s << endl;
    cout << s.capacity() << endl;
    s.shrink_to_fit();
    s.resize(4);
    cout << s << endl;
    cout << s.length() << endl;
    cout << s.capacity();

    return 0;
}
