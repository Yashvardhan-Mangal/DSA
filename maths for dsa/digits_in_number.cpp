#include <iostream>
using namespace std;

 int count_digits(int n){
        int count = 0;
        while(n>0){  // n>=0 will give infinite loop
            count ++;
            n=n/10;
        }
        
        return count;
        
    }

int main() {
    int n;
     cout<<"Enter the number"<<endl;
     cin>>n;
    cout<<"Total digits in number is - "<<count_digits(n);                            
    return 0;
}