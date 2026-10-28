#include <iostream>
using namespace std;

int main() {
    int a1[] = {12, 90, 76, 45, 99, 60};
    int target = 60;
    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (a1[i] == target) {
            cout << "Value found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Value not found";
    }

    return 0;
}