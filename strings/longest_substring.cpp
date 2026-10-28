#include <iostream>
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_set<char>st;
        int i = 0;
        int count = 0;
        while (i<str.length())
        {
           if(st.find(str[i]) != st.end()){
                 count ++;
           }
           st.insert(str[i]);
           i++;
        }
        return count;
    }
};

int main() {
    string str = "abcabcbb";
    Solution s1;
    cout<<s1.lengthOfLongestSubstring(str);
    return 0;
}