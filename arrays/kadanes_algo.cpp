#include <iostream>
using namespace std;

int main() {
    int a[] = {12, 90, 76, 45, 99, 60};
     int n = sizeof(a) / sizeof(a[0]);


   //   cout<<"Possible subarrays : "<<endl; // (n*(n+1))/2
   //   for (int st = 0; st < n; st++)
   //   {
   //      for (int end = st; end < n; end++)
   //      {
   //           for (int i = st; i <= end; i++)
   //           {
   //              cout<<a[i];
   //           }
   //           cout<<" ";
   //      }
   //      cout<<endl;
   //   }


int max_sum = 0;
    for (int st = 0; st < n; st++)
     {
int currsum = 0;
        for (int end = st; end < n; end++)
        {
         currsum +=a[end];
             max_sum = max(currsum,max_sum);   
        }
     }
     cout<<"Max subarray sum : "<<max_sum;
    return 0;
}