#include<iostream>
using namespace std;
int main(){
    int a,b;
    int c;
    cout<<"Enter the Numbers ";
    cin>>a ;
    cin>>b;
    cout<<endl;
    cout<<"Enter the Number to check is a perfect divisible by "<<a <<" and" <<b<<endl;
    cin>>c;
    if(c % a == 0 && c % b == 0){
        cout<<"Perfect Divisible";
        return true;
    } else{
        cout<<"Not Perfect Divisible";
    }
    return 0;

}