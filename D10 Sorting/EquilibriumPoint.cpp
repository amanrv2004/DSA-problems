// Equilibrium 

#include<iostream>
using namespace std;
// O(n2)
int main(){
    int arr[]= {1,3,5,2,2};
    for(int i = 0 ; i < 5; i++){
        int rightSum = 0;
        int leftSum = 0;
       for(int j = i-1 ; j>=0; j--){
          leftSum = leftSum +arr[j];
       }
       for(int k = i+1; k <5;k++){
        rightSum = rightSum + arr[k];
       }

       if(leftSum == rightSum){
        cout<<i+1;
       }
       
    }

    return 0;
}

// another method O(n)
int Equlibrium(){
    int arr[]= {1,3,5,2,3,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total = 0;
    for(int i = 0 ; i < n ;i++){
        total = total + arr[i];
    }
    cout<<total<<endl;
    
    int right = total;
    int left = 0;
    for(int i = 0; i< n ; i++){
        right= right - arr[i];
        left = left + arr[i-1]; 
        
        if(right == left){
            cout<<i<<endl;
        }
    }
    return 0;
}