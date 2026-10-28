#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string str) {
    int i = 0;
       int j = str.length()-1; 
    while(i<=j){
        if(!isalnum(str[i])){
            i++;
            continue;
        }
        if(!isalnum(str[j])){
            j--;
            continue;
        }
        
       if(tolower(str[i])!=tolower(str[j])){
            return false;
        }
        
        i++;
        j--;
    }
    return true;
    }
};

int main() {
    string str;
    cout<<"enter the string : ";
    getline(cin, str);
    Solution s1;
    cout<<s1.isPalindrome(str);
    return 0;
}