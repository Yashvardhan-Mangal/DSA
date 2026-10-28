#include <iostream>
using namespace std;

int main() {
    int a[] = {12, 90, 76, 45, 60};
     int size_a = sizeof(a) / sizeof(a[0]);
    int shift; 
    cout<<"enter ther value you want to shit upto : "<<endl;
    cin>>shift;
    int b[10];
    for (int i = 0; i <shift ; i++)
    {
        b[i] = a[shift-1 + i];
    }
   
    for (int i = size_a - 1; i <=shift ; i++)
    {
        a[i] = a[i-shift];
    }
     for (int i = 0; i <size_a ; i++)
    {
        a[i] = b[shift-i-1];
    }
     for (int i = 0; i <size_a ; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}