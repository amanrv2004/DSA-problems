#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,9,5,10,1,8,2,0};
    int n;
    cin>>n;
    cout<<"Youu entered "<<n<<endl;
    for(int i = 0; i<8;i++){
        for(int j = i+1;j<8;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0; i< 8 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}