#include <iostream>
using namespace std;

int main() {
    int a[] = {12, 90, 76, 60, 45, 99, 60};
    int size_a = sizeof(a) / sizeof(a[0]);

    int target = 60;
    int b[10];
    int count = 0;

    for (int i = 0; i < size_a; i++) {
        if (a[i] == target) {
            b[count] = i;
            count++;
        }
    }

    cout << "Occurrences of target are at:" << endl;

    for (int i = 0; i < count; i++) {
        cout << b[i] << "th position" << endl;
    }

    return 0;
}