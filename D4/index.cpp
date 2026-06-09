// 1 2 3 4 5  
// 6 7 8 9 10  
// 11 12 13 14 15  
// 16 17 18 19 20  
// 21 22 23 24 25  
// One Method 
#include<iostream>
using namespace std;
int main(){
    int count = 1;
    for(int i = 1; i<=5 ;i++){
        for(int j = 1; j<=5;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<" "<<endl;;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 25; i++) {
        cout << i << " ";
        // Move to next line after every 5 numbers
        if (i % 5 == 0) {
            cout << endl;
        }
    }
    return 0;
}

