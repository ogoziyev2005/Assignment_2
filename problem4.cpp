//
// Created by Otabek Goziyev on 19/09/24.
//
#include <iostream>
//#include <algorithm>  // For sort function
using namespace std;

int main() {
    // Input the four integers
    int nums[4];
    for (int i = 0; i < 4; i++) {
       cin >> nums[i];
    }

    // Sort the array
   // sort(nums, nums + 4);

    // Count how many pairs of adjacent numbers are the same
    int modifications = 0;
    for (int i = 1; i < 4; i++) {
        if (nums[i] == nums[i - 1])
            modifications++;

    }

    // Output the result
    cout << modifications << endl;

    return 0;
}
