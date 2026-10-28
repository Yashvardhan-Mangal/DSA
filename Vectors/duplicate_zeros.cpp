#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                for (int j = arr.size() - 1; j > i; j--)
                {
                    arr[j] = arr[j - 1];
                }

                i++;
            }
        }

        cout << "New array: ";

        for (int x : arr)
            cout << x << " ";
    }
};

int main() {
    vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};

    Solution s;
    s.duplicateZeros(arr);

    return 0;
}