#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<char>vec = {'a','b', 'c', 'd'};
    for(char val : vec){ // 'val' is not the index its the value at each index
        cout<<val<<endl;
    }
    return 0;
}