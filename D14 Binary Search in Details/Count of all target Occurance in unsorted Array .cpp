// in unsorted Array

#include<iostream>
using namespace std;
int main() {
    int arr[] = {7,8,2,2,2,2,3,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    cout << "Count of Target in Array : " << count << endl;
    return 0;
}