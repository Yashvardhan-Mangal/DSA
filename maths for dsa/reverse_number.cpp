#include <iostream>
using namespace std;

int rev_num(int n){
      int result = 0;
      while(n>0){
        int a = n%10;
        
        result = a + result *10;
        n=n/10;
      }
    return result;  
}

int main() {
    int num ;
    cout<<"Enter a number"<<endl;

    cin>>num;

    cout<<"Reverse of a number is : "<<rev_num(num);
    
      
    return 0;
}