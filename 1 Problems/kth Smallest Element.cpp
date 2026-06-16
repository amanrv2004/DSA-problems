#include<iostream>
using namespace std;

int main(){

    int k = 4 ; 
    int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout<<arr[k-1];
    return 0;
}