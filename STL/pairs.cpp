#include <iostream>
#include<string>
using namespace std;

// Pairs are like dictionary 

int main() {
   
    pair<int,int> p = {1,2};
    pair<char, int> p1 = {'a', 50};
    pair<int,pair<string, int>> p2 = {2,{"Yash", 90}};
    cout<<"the marks of student "<<p1.first<<" is : "<<p1.second<<endl;
    cout<<"The marks of "<<p2.second.first<< " is : "<<p2.second.second;
    return 0;
}