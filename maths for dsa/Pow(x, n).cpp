#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            x=1/x;
            n=-n;
        }
        double result = 1.0;
        long long i = 0; 
       while(i<n){
        result = result*x;
        i++;
       }
        return result;
    }
};

int main() {
    double x = 4;
    int n = 3;
    Solution s1;
    cout<<s1.myPow(x,n);
    return 0;
}