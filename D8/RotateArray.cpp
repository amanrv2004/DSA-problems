// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10,3,5,12,17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[n-1];
    for(int i = n-1 ;i>=0;i--){
        arr[i+1]=arr[i];
    }   
    arr[0]=temp;
    
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}