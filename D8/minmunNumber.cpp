// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 3, 5, 1, 17};
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << endl;
    return 0;
}