#include <iostream>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string str) {
        int i = str.length() - 1;
        int count = 0;
        while(i>=0 && str[i]==' '){
            i--;
        }
        while(i>=0 && str[i]!=' '){
           count++;
           i--;
        }
        return count;
    }
};
int main() {
    string str =  "   fly me   to   the moon  ";
    Solution s1;
    cout<<"Length of last word => "<<s1.lengthOfLastWord(str);
    return 0;
}