#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 4;

    int n = sizeof(arr) / sizeof(arr[0]);
    d = d % n;

    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}