#include <iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> de;
    de.push_back(8);
    de.push_back(5);
    de.push_back(7);
    de.push_back(4);
    de.push_back(9);
    de.push_back(6);
    de.push_front(3);
    de.push_front(2);

    for (int val : de)
    {
        cout<<val << " ";
    }
    
    return 0;
}