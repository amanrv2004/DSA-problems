
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 2, 3, 4, 5,6,7,8,9};
    int k;
    cout << "Enter the number that how many times you want to rotate :";
    cin >> k;
    int x = 0;
    int length = sizeof(nums) / sizeof(nums[0]);
    while (x < k)
    {
        int temp = nums[length - 1];
        for (int i = length - 2; i >= 0; i--)
        {
            nums[i + 1] = nums[i];
        }
        nums[0] = temp;

        x++;
    }

    for (int i = 0; i < length; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}