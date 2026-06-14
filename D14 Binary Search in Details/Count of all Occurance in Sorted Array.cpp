//using binary search for sorted array 

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,2,2,2,5,6};    
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = n-1,mid;
    int left = -1;
    int right = -1;
    int target = 2;
    
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == target){
            left = mid;
            end = mid -1;
        }
        else if(arr[mid] > target){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    start = 0;
    end = n -1;
    while (start <= end) {
            mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                right = mid;
                start = mid + 1;  
            }
            else if (arr[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
    }
    cout<<"Count of Target in an Array : "<< right-left+1<<endl;
    return 0;
}
