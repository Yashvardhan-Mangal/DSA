#include <iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
    //    string new_part = "";
       int i = 0;
            while (i<s.length())
            {
                string new_part = s[i] + s[i+1] +s[i+2];
                if(new_part==part){
                
                }
            }
            

    }
};

int main() {
    s = "daabcbaabcbc";
    part = "abc";
    return 0;
}