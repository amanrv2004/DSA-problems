#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int sum = 0;
    int mul = 1;

    while (n) {
        int digit = n % 2;
        sum = sum + digit * mul;
        n = n / 2;
        mul = mul * 10;
    }

    cout << sum << endl;

    return 0;
}