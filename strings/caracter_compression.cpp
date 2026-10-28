#include <iostream>
#include<vector>
#include<string>
using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {
            vector<int>countch;
             int ch_count = 1;
             string result_str;
        for (int i = 0; i < chars.size(); i++)
        {
           
            if(chars[i]==chars[i+1]){
                 ch_count++;
            }
            countch.push_back(ch_count);
            if(chars[i]!=chars[i+1]){
                ch_count=1;
            }
        }
        for (int i = 0; i < countch.size(); i++)
        {
           
             result_str= chars[0] + to_string(countch[i]) + chars[countch[i]] +  to_string(countch[i+1])
        }
        
       
    }
};

int main() {
    vector<char> chars = {"a","a","b","b","c","c","c"};
    return 0;
}