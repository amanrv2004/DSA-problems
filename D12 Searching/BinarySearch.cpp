
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,7,8,3,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n;i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }  
        }
    }
    int start = 0;
    int end = n-1;
    int mid ;
    int target = 5;
    for(int i = 0 ; i < n; i++){
        int mid = (start+end)/2;
        if(arr[mid]==target){
            cout<<"Mil Gaya at "<<mid<<endl;
            return 0;
        }
        else if( target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<"Element is not in Array"<<endl;
    return 0;
}