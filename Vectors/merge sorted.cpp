#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        while(i<n){
            nums1[n+i] = nums2[i];
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};
int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = nums1.size();
    int n = nums2.size();
Solution s1;
s1.merge(nums1, m, nums2, n);

    for (int i = 0; i < m; i++)
    {
        cout<<nums1[i]<<" ";
    }
    
     return 0;
}