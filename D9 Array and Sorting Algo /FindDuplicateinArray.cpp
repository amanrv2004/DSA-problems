// 0 occurs 0 times
// 1 occurs 2 times
// 2 occurs 1 times
// 3 occurs 0 times
// 4 occurs 1 times
// 5 occurs 1 times


#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int arrCount[6] = {0};
    for(int i = 0; i < n; i++) {
        int index = arr[i];
        arrCount[index]++;
    }
    for(int i = 0; i < 6; i++) {
        cout << i << " occurs " << arrCount[i] << " times\n";
    }
    for(int i = 0; i < 6; i++) {
        if(arrCount[i]>1){
           cout<<i<<" ";
        }
    return 0;
}








