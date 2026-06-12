#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[] = {2, 6, 5, 10,9, 2, 10, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    cout << "Second Largest Number: " << secondLargest << endl;
    return 0;
}