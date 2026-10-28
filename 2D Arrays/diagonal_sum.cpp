#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
    int rows = 4;
    int cols = 4;
    int pdsum = 0;
    int sdsum = 0;
    
    // Primary diagonal sum
    for(int i = 0; i<rows; i++){
        pdsum+=matrix[i][i];  
        }

    // Secondary diagonal sum
    for(int i=0; i<rows; i++){
        sdsum += matrix[i][cols-i-1];
    }

    cout<<"primary diagonal sum => "<<pdsum<<endl;
    cout<<"secondary diagonal sum => "<<sdsum<<endl;

    if(rows==cols && rows %2 !=0){
       cout<<"total diagonal sum => "<<(pdsum + sdsum)-matrix[rows / 2][cols / 2]<<endl; 
    }
    else{
    cout<<"total diagonal sum => "<<pdsum + sdsum<<endl;
    }
    return 0;
}


