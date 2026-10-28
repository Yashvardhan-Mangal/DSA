#include <iostream>
using namespace std;

int main() {
    int a[] = {12, 90, 76, 45, 99, 60};
    int b[] = {90, 86, 25, 80, 60};
    int c[10];

    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);

    int k = 0;

    for (int i = 0; i < size_a; i++) {
        for (int j = 0; j < size_b; j++) {
            if (a[i] == b[j]) {
                c[k] = a[i];
                k++;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        cout << c[i] << " ";
    }

    return 0;
}