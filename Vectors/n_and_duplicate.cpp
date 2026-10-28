#include <iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
       for (int i = 0; i < arr.size(); i++)
       {
        for (int j = arr.size(); j > i; j--)
        {
            if (arr[i]==2*arr[j])
            {
                return true;
            }
            
        }
        
       }
       
      return false  ;
    }
};
int main() {
    vector<int>arr = {11,2,5,3};
     Solution s1;
     cout<<s1.checkIfExist(arr);
    return 0;
}