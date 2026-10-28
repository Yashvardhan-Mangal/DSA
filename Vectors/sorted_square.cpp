#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
           nums[i] = nums[i] * nums[i];
        }
         sort(nums.begin(),nums.end());
         return nums;
    }
};
int main() {
    vector<int>nums={-4,-1,0,3,10};
    Solution s1;
   vector<int> result = s1.sortedSquares(nums);

cout << "Final Vector: ";

for (int x : result) {
    cout << x << " ";
}
    return 0;
}