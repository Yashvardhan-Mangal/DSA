#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
       

    int rows = 3;
    int cols = 3;
    int maxrow = 0;
    int maxcol = 0;
    // printing all elements in matrix

    for(int i = 0; i<rows; i++){
        int curr_row = 0;
        for(int j=0; j<cols; j++){
            curr_row += matrix[i][j];
        }
        maxrow = max(curr_row, maxrow);
    }
    cout<<"Max row sum is => "<<maxrow<<endl;

for(int i = 0; i<cols; i++){
        int curr_col = 0;
        for(int j=0; j<rows; j++){
            curr_col += matrix[j][i];
        }
        maxcol = max(curr_col, maxcol);
    }
cout<<"Max column sum is => "<<maxcol;
    return 0;
}


