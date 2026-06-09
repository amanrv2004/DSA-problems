#include<iostream>
using namespace std;
int main(){
    char c = 'z';
    if(c == 'a'|| c == 'A') cout<<"Vowel";
    else if(c == 'e'|| c == 'E' ) cout<<"Vowel";
    else if(c == 'i' || c == 'I') cout<<"Vowel";
    else if(c == 'o'|| c == 'O') cout<<"Vowel";
    else if(c == 'u' || c == 'U') cout<<"Vowel";
    else cout<<"Consonant";
    return 0;
}