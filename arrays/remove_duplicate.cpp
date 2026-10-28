#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector<int>vec = {1, 1, 2, 2, 3, 4, 4};
 for (int i = 0; i < vec.size()-1; i++)
 {
   if(vec[i]==vec[i+1]){
      vec.erase(vec.begin()+i);
      i--;
   }
   }
   for(int x: vec){
      cout<<x<<" ";
    }
    return 0;
   }