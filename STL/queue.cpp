#include <iostream>
#include<queue>
using namespace std;
// FIFO
int main() {
    queue<int> q;
    q.push(2);
    q.push(9);
    q.push(6);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}