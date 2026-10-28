#include <iostream>
#include<queue>
using namespace std;
// priority queue arranged thenumber in sorted order
int main() {
    priority_queue<int> pq;
    pq.push(7);
    pq.push(3); // 3 will come before 7 because it is smaller
    pq.push(5); // 5 will come before 7 and after 3 because it lies between them
    pq.push(10); // 10 will be at the highest part  (10 will be printed first)

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}