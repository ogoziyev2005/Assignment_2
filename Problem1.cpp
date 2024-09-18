//
// Created by Otabek Goziyev on 18/09/24.
//
#include <iostream>
using namespace std;

int main() {
    // Define the integer range for 32-bit signed integers
    const long int min = -2147483648;
    const long int max = 2147483647;

    // Declare a long integer to store the input
    long int user_input;

    // Input from the user
    cin >> user_input;

    // Check if the number can be stored in a standard 32-bit int
    if (user_input >= min && user_input <= max) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
