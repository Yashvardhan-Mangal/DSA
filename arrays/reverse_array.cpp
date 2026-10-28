#include <iostream>
using namespace std;

int main() {
int a1[] = {12,90,76,45,99,60};
int size = sizeof(a1)/sizeof(a1[0]);
int st=0, end = size-1;
    // for (int i = 0; i<size/2 ; i++)
    // {
    //     int temp = a1[i];
    //     a1[i]=a1[size-i-1];
    //     a1[size-i-1] = temp;
    //     // swap(a1[i], a1[size-i-1]);
    // }
    
    while(st < end){
        swap(a1[st],a1[end]);
    }
    st++;
    end--;

    for (int  i = 0; i<size ; i++){
        cout<<a1[i]<<endl;
    }
    return 0;
}