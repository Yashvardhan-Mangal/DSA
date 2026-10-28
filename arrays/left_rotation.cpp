#include <iostream>
using namespace std;

int main() {
int a[] = {12, 90, 76, 45, 99, 60};
     int size_a = sizeof(a) / sizeof(a[0]);
int temp = a[0];
    for (int i = 0; i < size_a; i++)
    {
       a[i] = a[i+1];
    }
    a[size_a - 1] = temp;
    for (int i = 0; i < size_a; i++)
    {
       cout<<a[i]<<endl;
    }
    return 0;
}