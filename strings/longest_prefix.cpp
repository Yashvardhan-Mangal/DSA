#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string result = "" ;
        for (int i = 0; i < strs[0].size(); i++)
        {
            char curr = strs[0][i];
           for (int j = 1; j < strs.size(); j++)
           {
            if (curr!=strs[j][i]){
                return result;
            }
           }
           result = result + curr;  
        }
        return result;
    }
};
int main() {
    vector<string> strs = {"flower","flow","flight"};
    Solution s;
    cout<<"Longest common prefix : "<<s.longestCommonPrefix(strs);
    return 0;
}