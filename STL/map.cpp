#include <iostream>
#include<map>
using namespace std;
// consider map as a dictionary with key value pairs
int main() {
    map<string,int> m;
    m["marks"] = 10;
    m["headphones"] = 100;
    m["laptop"] = 1000;
    m["abc"] = 26;

    for(auto p : m){
        cout<<p.first<< "  "<< p.second;
        cout<<endl;
    }

    // printing is done according to alphabet order of keys
     //functions of  map have time complexity (O(logn))
    return 0;
}