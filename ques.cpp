#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 4, 8, 10, 12};

    for (int i = 4; i >= 2; i--) {
        arr[i + 1] = arr[i];
    }

    arr[2] = 6;

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}