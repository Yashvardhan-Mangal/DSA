// Armstrong is number which is equal to sum of cube of its digits ex : 153, 371, 1


#include <iostream>
using namespace std;

int check_armstrong(int n){
      int sum = 0;
      while(n>0){
        int a = n%10;
        sum += a*a*a;
        n=n/10;
      }
    return sum;  
}

int main() {
    int num ;
    cout<<"Enter a number"<<endl;
    cin>>num;

    if(num==check_armstrong(num)){
        cout<<"The number is armstrong number";
    }

    else{
        cout<<"The number is not armstrong number";
    }
    
      
    return 0;
}