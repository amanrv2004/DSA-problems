#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,7,8,3,5,1};    
    int target = 1;

    for(int i = 0;  i<6; i++){
        if(arr[i]==target){
            cout<<"Postion is at : "<<i+1<<endl;
            break;
        }   
    }
    cout<<"Target Element is not present in Array "<<endl;
    
    return 0;
}