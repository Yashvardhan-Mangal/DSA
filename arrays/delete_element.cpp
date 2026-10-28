#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    int current_size = 5;
    int delete_position = 3;

    for (int i = delete_position; i < current_size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    current_size--;

    for (int i = 0; i < current_size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}