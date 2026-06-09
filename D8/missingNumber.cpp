#include <iostream>
using namespace std;

int missingNum(int arr[], int size) {
    long long n = size + 1;

    long long sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    long long total = n * (n + 1) / 2;

    return total - sum;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << missingNum(arr, size);

    return 0;
}