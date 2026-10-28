#include <iostream>
#include<string>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_set<char> st1;
        unordered_set<char> st2;
        int i = 0;
        while(i < s.length()){
            st1.insert(s[i]);
            st2.insert(t[i]);
            i++;
        }
        if(st1.size() == st2.size()){
            return true;
        }
        return false;
    }
};
int main() {
    string t = "f11";
    string s = "b23";
    Solution sol;
    cout<< sol.isIsomorphic(s, t);
    return 0;
}