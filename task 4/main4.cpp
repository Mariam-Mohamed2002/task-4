#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int nums2 = {1};
    int nums3 = {5, 4, -1, 7, 8};

    cout << maxSubArray(nums1) << endl;
    cout << maxSubArray(nums2) << endl;
    cout << maxSubArray(nums3) << endl;

    return 0;
}
