// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void fact(int number){
    int sum = 1;
    for(int i = 1 ; i <= number ; i++ ){
        sum = sum * i;
    }
    cout<<sum;
}
int main() {
    int number;
    cin>>number;
    fact(number);
    return 0;
}


// #include <iostream>
// using namespace std;
// int fact(int number){
//     int sum = 1;
//     for(int i = 1 ; i <= number ; i++ ){
//         sum = sum * i;
//     }
//     return sum;
// }
// int main() {
//     int number;
//     cin>>number;
//     int factorial = fact(number);
//     cout<<factorial<<endl;
//     return 0;
// }