#include<iostream>
using namespace std;

int main(){
    int nums[] = {1,3,5,6};
    int target = 7;
    int start = 0, end = (sizeof(nums)/(sizeof(nums[0])))-1,mid;

        while(start<=end){

            mid = (start+end)/2;
            if(nums[mid]==target){
                cout<< mid <<endl;
                break;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        cout<<start<<endl;
        
        return 0;
}