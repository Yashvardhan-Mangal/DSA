#include <iostream>
#include <algorithm>
using namespace std;

int main() {
     int a[] = {12, 90, 76, 45, 99, 60};
     int store[2];
     int size = sizeof(a) / sizeof(a[0]);
     sort(a, a + size);
     int target = 102;
     int i = 0;
     int j = size-1;
   while(i<j)
   {

    if (a[i]+a[j]>target){
    j--;
    }

    else if (a[i]+a[j]<target){
    i++;
    }

    else if(a[i]+a[j]==target){
     store[0] = a[i];
     store[1] = a[j];
     break;
   }
}
cout<<"The possible pair is : "<<store[0]<<" "<<store[1]<<endl;
    return 0;
}