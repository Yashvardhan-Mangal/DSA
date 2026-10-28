#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       vector<int> new_num;
       unordered_set<int> check(nums.begin(), nums.end());;
       int i = 0; 
       int j = 0;

    //  inserting element in new vector   
       while(i<=nums.size()){
        new_num.push_back(i);
        i++;
       }
    // comparing element with sets to new vector
   
    while(j<new_num.size()){
        if(check.find(new_num[j]) == check.end()){
             return new_num[j];
        }
        j++;
    }

       return -1;
    }
};
int main() {
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    
    Solution sol;
    cout<<sol.missingNumber(nums);
    return 0;
}