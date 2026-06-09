// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10,3,5,12,17};
    for(int i = 0 ;i<5;i++){
        if(arr[i]%2 == 0 || arr[i]%2 == -1){
           cout<<arr[i]<<" is EVEN number"<<endl;
    }
    else {
        cout<<arr[i]<<" is ODD number"<<endl;
    }
    }
    return 0;
}