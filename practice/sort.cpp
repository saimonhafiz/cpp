// This code is written by mdsaimonhafiz
// C++ program for implementation of Bubble Sort Algorithm
// Optimized with swapped boolean
#include <bits/stdc++.h>

using namespace std;

// Function to print an Array
void printArray (int array[], int sizeArray) {
    cout << "The array is shown below\n";
    for (int i = 0;i < sizeArray; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    //cout << endl;
}

// Function to sort the Array using Bubble Sort Algorithm
void bubbleSort(int array[], int sizeArray) {
    int i = 0, j =0;
    bool swapped;
    for (i = 0; i < sizeArray -1; i++) {
        swapped = false;
        for (j = 0; j < sizeArray -1 -i; j++) {
            if(array[j] <= array[j+1]) {
                    swap(array[j], array[j+1]);
                    swapped = true;
            }
        }
        if(swapped == false) break;
    }

}

// Driver code
int main() {
    int elemArray[5] = {7, 6, 5, 13, 2};
    int sizeArray = sizeof(elemArray) / sizeof(elemArray[0]);
    bubbleSort(elemArray, sizeArray);
    //cout << sizeArray << "\n";
    printArray(elemArray, sizeArray);
    return 0;
}
