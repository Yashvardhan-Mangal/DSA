#include <iostream>
#include<string>
using namespace std;


class Solution {
public:
    string reverseWords(string str) {
       reverse(str.begin(),str.end());
        
         for (int i = 0; i < str.length(); i++)
         {
          string word = "";
          while (i<str.length() && str[i]!=' ')
          {
           word+=str[i];
          }
          reverse(word.begin(),word.end());
         }
         
    
        }
    
    }
};


int main() {
    string str = "hello world";
    Solution sol;
    cout<< sol.reverseWords(str);
    return 0;
}