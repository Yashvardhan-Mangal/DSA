#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        while(i<n){
            if (nums[i]==0){
              for (int k = i; k < n-1; k++)
              {
                nums[k] = nums[k+1];
              }
              nums[n-1] = 0;
              n--;
            }else{
               i++;
                }
            }
    }
};

int main() {
    vector<int> nums = {0,1,0,3,12};
    Solution s1;
    s1.moveZeroes(nums);

    for(int n : nums){
        cout<<n<<" ";
    }
    return 0;
}