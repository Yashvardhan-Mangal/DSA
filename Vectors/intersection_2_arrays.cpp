#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        bool isnum1;
        int i = 0;
        vector<int> result;

        unordered_set<int> check;
        unordered_set<int> added;

        if (nums1.size() < nums2.size()) {
            check = unordered_set<int>(nums1.begin(), nums1.end());
            isnum1 = false;
        }
        else {
            check = unordered_set<int>(nums2.begin(), nums2.end());
            isnum1 = true;
        }

        if (isnum1) {
            while (i < nums1.size()) {
                if (check.find(nums1[i]) != check.end() &&
                    added.find(nums1[i]) == added.end()) {

                    result.push_back(nums1[i]);
                    added.insert(nums1[i]);
                }
                i++;
            }
        }
        else {
            while (i < nums2.size()) {
                if (check.find(nums2[i]) != check.end() &&
                    added.find(nums2[i]) == added.end()) {

                    result.push_back(nums2[i]);
                    added.insert(nums2[i]);
                }
                i++;
            }
        }

        return result;
    }
};

int main() {
    vector<int> nums1 = {9, 4, 9, 8, 4};
    vector<int> nums2 = {4, 9, 5};

    Solution sol;
    vector<int> display = sol.intersection(nums1, nums2);

    for (int j = 0; j < display.size(); j++) {
        cout << display[j] << " ";
    }

    return 0;
}