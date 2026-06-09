//Sort 0s, 1s and 2s

// Zero : 3
// One : 5
// Two : 3
// 0 0 0 1 1 1 1 1 2 2 2 

#include <iostream>
using namespace std;
int main() {
    int arr[]={0,1,1,0,2,0,2,1,1,1,2};
    int n = sizeof(arr) / sizeof(arr[0]); // int n = arr.size();
    int count_zero = 0;
    int count_one = 0;
    int count_two = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==0){
            count_zero++;
        }
        else if(arr[i]==1){
            count_one++;
        }
        else{
            count_two++;
        }
    }
    cout<<"Zero : "<<count_zero<<endl;
    cout<<"One : "<<count_one<<endl;
    cout<<"Two : "<<count_two<<endl;
    
    for(int i =0 ; i<count_zero;i++){
        arr[i] = 0;
    }
    for(int i =count_zero ; i<count_zero + count_one;i++){
        arr[i] = 1;
    }
    for(int i =count_zero + count_one; i<n;i++){
        arr[i] = 2;
    }
    
    
    for(int i= 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}







