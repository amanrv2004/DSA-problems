// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a = 20 , b = 10 , c = 20;
    // cout<<a<<" "<<b<<" "<<c;
    
    if(a>b && a>c){
        cout<<"A is Greater"<<endl;
    }
    else if(b>a && b>c){
        cout<<"B is Greater"<<endl;
    }
    else if(c>a && c>b){
        cout<<"C is Greater"<<endl;
    }
    else if(a==b &&a==c ){
        cout<<"All are Equal"<<endl;
    }
    else if(a==b && a > c){
        cout<<"A and B are greater";
    }
    else if(a==c && a > b){
        cout<<"A  and C are greater";
    }
    
    else if(b==c && b > a){
        cout<<"B  and C are greater";
    }
    

    return 0;
}