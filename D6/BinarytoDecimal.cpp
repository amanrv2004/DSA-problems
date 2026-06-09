#include <iostream>
using namespace std;
int main() {
    // int n = 1010;
    // int sum = 0;
    // int mul = 1;
    // while(n){
    //     int rem = n % 10;
    //     n = n / 10;
    //     sum = sum + rem * mul;
    //     mul = mul * 2;
    // }
    // cout<<sum ;

    int num = 101;

    while(num){
        int rem = num % 10;
        num = num ^ 1;
    }
    return 0;
}
