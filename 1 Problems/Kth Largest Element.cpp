#include<iostream>
using namespace std;

int main(){

    int k = 4 ; 
    int arr[] = {1, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout<<arr[n - k -1];
    return 0;
}