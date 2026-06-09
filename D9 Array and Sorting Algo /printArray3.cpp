// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 


#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    for(int i = 0 ; i<5; i++){
        for(int j = 4-i ; j>=0; j--){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}