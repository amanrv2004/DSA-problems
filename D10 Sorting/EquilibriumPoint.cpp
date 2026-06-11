// Equilibrium 

#include<iostream>
using namespace std;

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