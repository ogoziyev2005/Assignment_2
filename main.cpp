#include <iostream>
//#include <vector>
using namespace std;

// take a const reference as argument
int sum(const vector<int> &nums) {
    int total = 0;

    for(auto num: nums){
        total += num;
    }

    return total;
}

int main() {
int a;
cin>>a;
    vector<int> nums = {1, 2, 3, 4, 5,a};

    cout << "Sum: " << sum(nums);

    return 0;
}