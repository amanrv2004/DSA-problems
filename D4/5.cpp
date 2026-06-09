// a 
// a b 
// a b c 
// a b c d 
// a b c d e 

#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<= 5; i++){
        for(int j = 1; j<= i; j++){
            char c = 'a'+j-1;
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}