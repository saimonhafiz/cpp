#include <bits/stdc++.h>

using namespace std;

int main() {
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sizeNums = sizeof(nums) / sizeof(nums[0]);
    int d = 5;
    int tmp[sizeNums];
    int j = 0;
    for(int i=d;i<sizeNums;i++) {
        tmp[j] = nums[i];
        j++;
    }
    j = d;
    for(int i=0;i<d;i++) {
        tmp[j] = nums[i];
        j++;
    }
    for(int i=0;i<sizeNums;i++) {
        cout << tmp[i] << " ";
    }

    return 0;
}
