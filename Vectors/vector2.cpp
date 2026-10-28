#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<char>vec ;
  vec.push_back(0);
  vec.push_back(2);
   vec.push_back(3);
   cout<<"size : "<<vec.size()<<endl;
   cout<<"Capacity:  "<<vec.capacity();
    return 0;
}