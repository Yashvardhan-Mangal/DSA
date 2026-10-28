#include <iostream>
#include<stack>
using namespace std;
//LIFO
int main() {
    stack<int> s;
    s.push(6);
    s.push(8);
    s.push(9);
    cout<<"top value = "<<s.top()<<endl;
    
    return 0;
}