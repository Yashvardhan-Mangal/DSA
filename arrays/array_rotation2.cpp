#include <iostream>
using namespace std;
// Array rotation by 2
int main() {
     int a[] = {12, 90, 76, 45, 99, 60};
     int size_a = sizeof(a) / sizeof(a[0]);
     int temp = a[size_a - 1];
     int temp2 = a[size_a - 2];
     for (int i = size_a - 1; i >=2; i--)
     {
        a[i] = a[i-2];

     }
     a[0] = temp2;
     a[1] = temp;
for (int i = 0; i < size_a; i++)
{
   cout<<a[i]<<endl;
}
    return 0;
}