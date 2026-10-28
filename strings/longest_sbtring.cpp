#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:

       bool checknonduplicate(string substr, char c){
                   
              for (int i = 0 ; i < substr.length(); i++)
              {
                if(c == substr[i]){
                    return false;
              }       
       }return true; 
    }
    int lengthOfLongestSubstring(string s) {

        string substr = "";
        substr+=s[0];
        

        for (int i = 1; i < s.length(); i++)
        {
           char c = s[i];
            if (checknonduplicate(substr , c)){
                substr += c;
            }
            else{
                return substr.length();
            }
        } 
       
       }
       
    
};


int main() {
    string s = "pwwkew";
    Solution s1;
    cout<<"Length of longest substr => "<< s1.lengthOfLongestSubstring(s);
    return 0;
}