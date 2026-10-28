#include <iostream>
using namespace std;

bool check_palindrome(int num){
    int result = 0 ;
    int original = num;
       while(num > 0){
          int  n = num%10;
          result = n + result*10; 
          num = num/10;
    }
           if (original == result)
           return true;

           else 
           return false;       
}

int main() {
    int num ;
    cout<<"Enter the number => "<<endl;
    cin>>num;
    cout<<check_palindrome(num);
     return 0;
}