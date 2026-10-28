#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int matrix[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
                        //row1    //row2    //row3    //row4
    // Accessing elements of matrix
    // 2nd row and 3rd column
    // cout<<matrix[1][2];

    int rows = 4;
    int cols = 3;

    // printing all elements in matrix

    for(int i = 0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


