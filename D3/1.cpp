#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int last = 0;
    int previous = 1;
    int current;
    cout<<last<<endl;
    cout<<previous<<endl;
    for(int i = 3; i<= n ; i++){
        current = last + previous;
        last = previous ;
        previous = current ;
        cout<<current<<endl;
    }
    cout<<"Current value is "<<current<<endl;
    return 0;
}