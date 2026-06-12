#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[] = {12,0,4,8,6,9,11,23,5,8,9};
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