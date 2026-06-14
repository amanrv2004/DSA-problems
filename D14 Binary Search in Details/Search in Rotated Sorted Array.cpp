#include<iostream>
using namespace std;

int main(){
    
        int arr[] = {4,5,1,2,3};
        int n = sizeof(arr)/sizeof(arr[0]);
        int start = 0;
        int end = n - 1;
        int pivot = arr[0];
        int index;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid]>=pivot){
                start = mid +1;
            }
            else{
                index = mid;
                end = mid-1;
            }
        }
        cout <<index << endl;
    return 0;
}