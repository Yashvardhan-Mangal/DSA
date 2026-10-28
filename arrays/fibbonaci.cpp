#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;

    arr[0] = 0;
    arr[1] = 1;

    cout << "Enter the number: ";
    cin >> n;

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << "Fibonacci of " << n << "th = " << arr[n - 1];

    return 0;
}