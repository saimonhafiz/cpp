// Recursive Implementation of Bubble Sort Algorithm

#include <bits/stdc++.h>

using namespace std;
// Function to print Array Elements
void printArray(int array[], int sizeArray) {
    cout << "Array of numbers: \n";
    cout << "{";
    for(int i=0;i<sizeArray;i++) {
        cout << array[i];
        if(i!= sizeArray-1) cout << ", ";
    }
    cout << "}" << endl;
    samiul hossain mechanical
}

// Function to sort array using recursive bubble sort


int main() {
    int numArray[7] = {444,32,66,43,32,23,1};
    int numSize = sizeof(numArray) / sizeof(numArray[0]);
    printArray(numArray, numSize);
    return 0;
}
