#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

  class Solution {
public:
    int maxArea(vector<int>& height) {

        int i = 0;
        int j = height.size() - 1;
        int max_area = 0;

        while(i < j) {

            int curr_area = (j - i) * min(height[i], height[j]);

            max_area = max(max_area, curr_area);

            if(height[i] < height[j])
                i++;
            else
                j--;
        }

        return max_area;
    }
};


int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout<<"Max area of water : "<<s.maxArea(height);
    return 0;
}