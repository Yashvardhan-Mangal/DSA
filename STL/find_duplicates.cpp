#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_set<int> st;
       for(int val :nums){
        if(st.find(val) != st.end()){
            return val;
        }
        st.insert(val);
       }
       return -1;  
    }
};
int main() {
    vector<int> nums = {1,3,4,2,2} ;
    Solution s1;
     cout<<s1.findDuplicate(nums);
    return 0;
}