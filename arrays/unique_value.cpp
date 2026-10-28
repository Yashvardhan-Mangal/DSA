#include <iostream>
using namespace std;

int main() {
    int a[] = {12, 90, 76, 45, 99, 60};
    int size = sizeof(a) / sizeof(a[0]);
    int un_count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j])
                un_count++;
        }
    }

    if (un_count != 0)
        cout << un_count << " duplicate values found";
    else
        cout << "No duplicate values found";

    return 0;
}