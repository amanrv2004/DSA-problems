// 5 4 3 2 1 
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5


#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    for(int i = 0 ; i<5; i++){
        for(int j = 4 ; j>=i; j--){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

