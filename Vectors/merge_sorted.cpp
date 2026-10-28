#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int k = 0;

        while (k < n)
        {
            nums1[m + k-1] = nums2[k];
            k++;
        }

        cout << "New array : " << endl;

        for (int x : nums1)
        {
            cout << x << " ";
        }
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    Solution s;

    s.merge(nums1, 3, nums2, 3);

    return 0;
}