#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int freq = 1;
        int ans = nums[0];
        for(int i =1; i<nums.size();i++){
            if(nums[i]==nums[i-1]){
              freq++;
            }else{
                freq =1;
                ans = nums[i];
            }
            if(freq>nums.size()/2)
            return ans;
            
        }
       return ans;
    }
};
int main(){
    vector<int> nums={2,2,1,1,1,2,2};
   Solution s;
   cout<<s.majorityElement(nums);
   return 0;
}