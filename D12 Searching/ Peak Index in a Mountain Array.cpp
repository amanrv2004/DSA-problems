//Peak Index ina Mountain Array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,7,8,3,15,19,6,3,8,}; 
    int n = sizeof(arr)/sizeof(arr[0]);   
    int min = -1;// 2,7,8,8,
    int index;
    for(int i = 0;  i<n; i++){
        if(arr[i]>min){
            min = arr[i];
            index = i;
        }   
    }
    cout<<"Highest Element in an array is "<<min<<" at index "<<index <<endl;
    
    return 0;
}