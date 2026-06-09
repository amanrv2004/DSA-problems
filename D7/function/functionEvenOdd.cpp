// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void IsEvenorOdd(int number){
    if(number % 2 == 0){
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }
    return;
}
int main() {
    int number;
    cin>>number;
    IsEvenorOdd(number);
    return 0;
}