// Perfect or Not Perfect Number


#include<iostream>
using namespace std;
int main(){
    int num = 15;
    if(num%3 == 0){
        if(num%5 == 0){
            cout<<"Perfect";
        }
    }
    else{
    cout<<"Not Perfect";
    }
    return 0;
}

int perfect(){
    int num = 15;
    if(num%3 == 0 && num%5 == 0 ){
        cout<<"Perfect";
    }
    else{
        cout<<"Not Perfect";
    }
    return 0;
}
