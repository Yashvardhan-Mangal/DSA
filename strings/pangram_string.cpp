#include <iostream>
#include <string>
using namespace std;

int main() {
    string s =  "leetcode";
    bool iscorrect = true;
    bool found[26] = {false};      // one slot per letter 'a'..'z'

    for (char ch : s) {
        found[ch - 'a'] = true;    // 'a'->0, 'b'->1, ... 'z'->25
    }

    for (int i = 0; i < 26; i++) {
        if (!found[i])
            iscorrect = false;
    }
    if(iscorrect){
        cout<<"String is pangram"<<endl;
    }
    else{
       cout<< "string is not pangram";
    }
    return 0;
}