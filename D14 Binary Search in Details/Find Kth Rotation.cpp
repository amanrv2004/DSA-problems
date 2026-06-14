//Given an increasing sorted rotated array arr[] of distinct integers. The array is right-rotated k times. Find the value of k.

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {4,5,1,2,3};
    int min = -1;
    int index;
    for(int i = 0; i<5;i++){
        if(arr[i]>min){
            min = arr[i];
            index = i;
        }
    }
    cout<<index+1;

    return 0;
}