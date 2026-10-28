#include <iostream>
#include<string>
using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1;
        string new_str = "";
        int last_length;
        if(s[s.length()-1]==' '){
            i--;
            last_length+=1;
        }
        while (s[i]!=' ')
        {
            new_str +=s[i];
            i--;
        }
        last_length = new_str.length();
        return last_length;
    }
};


int main() {
    string s ;
    cout<<"enter your string"<<endl;
   getline(cin,s);
    Solution sol;
    cout<<"length of last string : " <<sol.lengthOfLastWord(s);
    return 0;
}