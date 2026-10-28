#include <iostream>
#include<list>
using namespace std;

int main() {
    list<int> li;
    li.push_back(8);
    li.push_back(5);
    li.push_back(7);
    li.push_back(4);
    li.push_back(9);
    li.push_back(6);
    li.push_front(3);
    li.push_front(2);

    for (int val : li)
    {
        cout<<val << " ";
    }
    
    return 0;
}