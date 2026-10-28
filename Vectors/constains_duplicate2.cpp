#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> st;
       int i = 0; 
       while (i< nums.size())
       {
                st.insert(nums[i]);
                i++;
       }
       
       if(st.size() != nums.size()){
        return true;
       }
   
    return false;
    }
};
int main() {
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
          Solution s1;
          cout<<s1.containsDuplicate(nums);    
    return 0;
}