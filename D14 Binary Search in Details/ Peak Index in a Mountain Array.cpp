//Peak Index ina Mountain Array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,7,8,3,15,19,6,3,2,1}; 
    int n = sizeof(arr)/sizeof(arr[0]);   
    int start = 0 , mid, end = n -1;
    int index;
    while(start<=end){
        mid= (start+end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            index = mid ;
        }
        else if(arr[mid]<arr[mid - 1]){
            end = mid + 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<"Highest Element in an array is "<<index<<" at index "<<index <<endl;
    
    return 0;
}