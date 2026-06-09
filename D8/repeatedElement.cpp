
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 2, 3, 1, 5,1,7,8,9};
    int length = sizeof(nums) / sizeof(nums[0]);
    for(int i = 0 ; i< length-1;i++){
        for(int j = i+1;j<length-1;j++){
            if(nums[i]==nums[j]){
                cout<<nums[i]<<" is repeated"<<endl;
            }
        }
    }
    cout<<"All are Unique";
    return 0;
}