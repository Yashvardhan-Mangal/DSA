#include <iostream>
#include<unordered_map>
using namespace std;
// consider map as a dictionary with key value pairs
int main() {
    unordered_map<string,int> m;
    m["marks"] = 10;
    m["headphones"] = 100;
    m["laptop"] = 1000;
    m["abc"] = 26;

    for(auto p : m){
        cout<<p.first<< "  "<< p.second;
        cout<<endl;
    }

    // printing is done randomly (no ascending order)
    
    //functions of unordered map have time complexity (O(1))
    return 0;
}