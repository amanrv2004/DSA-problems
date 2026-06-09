#include <iostream>
using namespace std;

int missingNum(int arr[], int size) {
    int n = size + 1;
    int x1 = 0;
    int x2 = 0;

    for(int i = 1; i <= n; i++) {
        x1 ^= i;
    }

    for(int i = 0; i < size; i++) {
        x2 ^= arr[i];
    }

    return x1 ^ x2;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << missingNum(arr, size);

    return 0;
}