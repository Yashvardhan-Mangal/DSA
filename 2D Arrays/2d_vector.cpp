#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
bool element_found(vector<vector<int>>& matrix, int target, int row) {
int n = matrix[0].size();
int st = 0;
int end = n - 1;


    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (target < matrix[row][mid]) {
            end = mid - 1;
        }
        else if (target > matrix[row][mid]) {
            st = mid + 1;
        }
        else {
            return true;
        }
    }

    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) {
        return false;
    }

    int m = matrix.size();
    int n = matrix[0].size();

    int start = 0;
    int end = m - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (target > matrix[mid][n - 1]) {
            start = mid + 1;
        }
        else if (target < matrix[mid][0]) {
            end = mid - 1;
        }
        else {
            return element_found(matrix, target, mid);
        }
    }

    return false;
}


};

int main() {
vector<vector<int>> matrix = {
{1, 3, 5, 7},
{10, 11, 16, 20},
{23, 30, 34, 60}
};


int target = 34;

Solution s1;
cout << s1.searchMatrix(matrix, target);

return 0;


}
