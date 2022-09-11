#include <bits/stdc++.h>

using namespace std;

// Print function
void printArray(int array[], int s) {
    for(int i=0;i<s;i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int d = 4;
    for(int j=0;j<4;j++) {
        for(int i=0;i<6-1;i++) {
            swap(arr[i], arr[i+1]);
    }
    }

    printArray(arr, 6);

    return 0;
}
