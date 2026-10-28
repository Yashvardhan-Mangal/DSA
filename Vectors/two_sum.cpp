#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> m;
      vector<int> result;
      for (int i = 0; i < nums.size(); i++)
      {
        int first = nums[i];
        int sec = target - first;

        if (m.find(sec) != m.end()){
            result.push_back(i);
            result.push_back(m[sec]);
            break;
        }
        m[first] =i;
      }
      return result;
    }
};
int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;
    Solution s1;
    s1.twoSum(nums, target);
    for(int val: s1.twoSum(nums, target)){
        cout<<val<<" ";
    }
    return 0;
}