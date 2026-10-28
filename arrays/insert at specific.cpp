#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec = {10, 20, 30, 40, 50}; // Array with space

int element_to_insert = 25;
int position = 2;
vec.push_back(0);
for (int i = vec.size()-1; i >position ; i--)
{
   vec[i]=vec[i-1];

}
vec[position] = element_to_insert;
for (int val : vec)
{
    cout<<val<<endl;
}

    return 0;
}