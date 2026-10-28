#include <iostream>
#include<set>
using namespace std;
// Set stores only unique values no duplications are allowed
int main() {
    set<int> st;
    st.insert(6);
    st.insert(10);
    st.insert(20);
    st.insert(60);
    st.insert(5);
    st.insert(4);

    for(int val: st ){
        cout<<val<<" ";
    }
     //functions of  map have time complexity (O(logn))
    return 0;
}