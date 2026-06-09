//-- Output 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    for(int i = 0 ; i<5; i++){
        for(int j = 0 ; j<5-i; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


