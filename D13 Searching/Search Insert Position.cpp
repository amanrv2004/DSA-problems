#include<iostream>
using namespace std;

int main(){
    int nums[] = {1,3,5,6};
    int target = 7;
    int index;
    int start = 0, end = (sizeof(nums)/(sizeof(nums[0])))-1,mid;

        while(start<=end){

            mid = end + (start - end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start = mid + 1;
                index = mid+1;
            }
            else{
                end = mid - 1;
                index = mid;
            }
        }
        cout<<index<<endl;
        
        return 0;
}