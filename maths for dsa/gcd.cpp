#include <iostream>
using namespace std;

int calculate_gcd(int a,int b){
    int gcd;

    if (a==0)
    gcd = b;

    else if(b==0)
    gcd = a;

    else if (a==b)
    gcd = a;


    else{
    for(int i=1;i<min(a,b);i++){
        if(a%i==0 && b%i==0)
           gcd = i;
    }
}
    return gcd;
}

int main() {
    int num1 = 30;
    int num2 = 25;
    cout<<"GCD of the numbers is : "<<calculate_gcd(num1,num2);
    return 0;
}