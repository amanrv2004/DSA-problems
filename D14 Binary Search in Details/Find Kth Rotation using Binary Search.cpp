//Given an increasing sorted rotated array arr[] of distinct integers. The array is right-rotated k times. Find the value of k.

#include<iostream>
using namespace std;

int main(){
    
        int arr[] = {4,5,1,2,3};
        int n = sizeof(arr)/sizeof(arr[0]);
        int start = 0;
        int end = n - 1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid]>arr[end]){
                start = mid +1;
            }
            else{
                end = mid;
            }
        }
        cout << "K = " << start << endl;

    return 0;
}