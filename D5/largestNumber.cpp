#include<iostream>
using namespace std;
int main(){
    int arr[] = {8,11,23,2,0,7,8,1,9,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n-1;i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }  
        }
    }
    cout<<"Largest Number in Array is : "<<arr[n-1]<<endl;
    return 0;
}