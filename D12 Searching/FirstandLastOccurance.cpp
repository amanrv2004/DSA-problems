
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n;i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }  
        }
    }
        int start = 0;
        int end = n - 1;
        int x = 5;
        int mid;
        int left_index = -1;
        int right_index = -1;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (arr[mid] == x) {
                left_index = mid;
                end = mid - 1;  
            }
            else if (arr[mid] > x) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        start = 0;
        end = n - 1;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (arr[mid] == x) {
                right_index = mid;
                start = mid + 1;  
            }
            else if (arr[mid] > x) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        cout<<left_index<<" and "<<right_index<<endl;
        return 0;
}