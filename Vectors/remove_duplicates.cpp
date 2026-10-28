#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void removeDuplicates(vector<int>& nums) {

        int j = 0;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }

        // Print unique elements
        for (int i = 0; i <= j; i++) {
            cout << nums[i] << " ";
        }
    }
};

int main() {

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    Solution s;
    s.removeDuplicates(nums);

    return 0;
}