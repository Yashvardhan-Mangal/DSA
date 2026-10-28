#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec = {4,1,2,1,2};
    
    int value = 0;
    for (int val : vec)
    {
        value= value^val;
    }
    
    cout<<"single number is "<<value;
    return 0;
}