#include <iostream>

using namespace std;
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i = 1;
        int sum_result = 0;
        if(num%2 != 0){
            return false;
        }else{
            while (i<=num/2)
            {
                if(num%i == 0){
                    sum_result += i;
                }
                i++;
            }
        }

        if(sum_result == num){
            return true;
        }
        return false;
    }
};
int main() {
    int num = 28;
    Solution sol;
    cout<<sol.checkPerfectNumber(num);
    return 0;
}