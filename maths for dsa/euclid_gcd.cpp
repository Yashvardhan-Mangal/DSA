#include <iostream>
using namespace std;

int calculate_gcd(int a, int b) {
    int gcd;

    while (a != 0 && b != 0) {
        if (a >= b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }

    if (a == 0)
        gcd = b;
    else
        gcd = a;

    return gcd;
}

int main() {
    int num1 = 30;
    int num2 = 25;

    cout << "GCD of the numbers is : "
         << calculate_gcd(num1, num2);

    return 0;
}