#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,7,8,3,5,1};

    for(int i = 0 ; i<5;i++){
        for(int j = i; j>=0; j--){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            } 
            else break; 
        }
    }
    for(int i = 0; i<6 ;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}