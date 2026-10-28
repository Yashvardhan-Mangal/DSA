#include <iostream>
#include<vector>
using namespace std;

int main() {
    int even_count = 0;
    int odd_count = 0;
      vector <int> a = {1245, 9011, 766, 455, 999, 60};
   
     int count = 0;
     
     for (int i = 0; i < a.size(); i++)
     {
        int n1 = a[i];
        count = 0;
        while(n1>0){
            count++;
            n1=n1/10;
        }
        if(count%2==0)
          even_count ++;
          else
          odd_count ++;

     }
     cout<<"even digits number : "<<even_count<<endl;
    cout<<"odd digits number : "<<odd_count<<endl;
    return 0;
}