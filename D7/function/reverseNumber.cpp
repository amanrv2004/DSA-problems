
#include <iostream>
using namespace std;
int reversedNumber(int number){
    int  rev  = 0;
    while(number != 0){
        int digit = number % 10;
        rev = rev * 10 + digit;
        number = number / 10;
    }
    return rev;
}
int main() {
    int number;
    cin>>number;
    int reverse = reversedNumber(number);
    cout<<reverse<<endl;
    return 0;
}