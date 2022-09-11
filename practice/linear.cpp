#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {10, 20, 80, 30, 60, 50,110, 100, 130, 170};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int res = -1;
    int x = 175;
    for(i=0; i<n; i++) {
        if(arr[i]==x) {
            res = i;
        }
    }
    cout << res << '\n';
    return 0;
}

