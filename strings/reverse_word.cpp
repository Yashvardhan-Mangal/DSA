#include <iostream>
#include<string>
using namespace std;


class Solution {
public:
    string reverseWords(string str) {
        int i = str.length()-1;
        string result_string = "";
        while (i>=0)
        {
            if(str[i]==' '){
                if(str[i-1]==' '){
                    i--;
                    continue;
                }
                else{
                  result_string =result_string + str[i]  ;  
                }
            }
            else{
            result_string =result_string + str[i]  ;
            }
            i--;
        }
        return result_string;
    }
};


int main() {
    string str = "hello world";
    Solution sol;
    cout<< sol.reverseWords(str);
    return 0;
}