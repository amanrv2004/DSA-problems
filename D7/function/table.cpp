// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void IsEvenorOdd(int number){
    int value = 1;
    for(int i = 1; i<= 10 ; i++){
       cout<<number*i<<endl;
    }
    return;
}
int main() {
    int number;
    cin>>number;
    IsEvenorOdd(number);
   
    return 0;
}