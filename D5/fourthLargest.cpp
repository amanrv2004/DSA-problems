#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {2, 6, 5, 9, 2, 10, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    int fourth = INT_MIN;
    for (int i =0; i< n; i++) {
        if (arr[i] > first) {
            fourth = third;
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            fourth = third;
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            fourth = third;
            third = arr[i];
        }
        else if (arr[i] > fourth &&
                 arr[i] != first &&
                 arr[i] != second &&
                 arr[i] != third) {
            fourth = arr[i];
        }
    }
    cout << "4th Largest Number: " << fourth << endl;
    return 0;
}