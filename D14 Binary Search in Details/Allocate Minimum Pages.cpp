// Allocate Minimum Pages


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& arr, int k, int mid) {
    int students = 1;
    int pages = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (pages + arr[i] <= mid) {
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];

            if (students > k) {
                return false;
            }
        }
    }

    return true;
}

int findPages(vector<int>& arr, int k) {
    int n = arr.size();

    if (k > n) {
        return -1;
    }

    int start = *max_element(arr.begin(), arr.end());
    int end = 0;

    for (int x : arr) {
        end += x;
    }

    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, k, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;

    cout << "Minimum pages allocated: " << findPages(arr, k);

    return 0;
}