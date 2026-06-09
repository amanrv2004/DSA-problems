// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,1,1,1,1};
    int largest = arr[0];
    for(int i = 1 ;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
    }
    }
    cout<<largest<<endl;
    return 0;
}