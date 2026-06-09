// 1 2 3 4 5 
// 2 3 4 5 
// 3 4 5 
// 4 5 
// 5 


#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    for(int i = 0 ; i<5; i++){
        for(int j = i ; j<5; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}