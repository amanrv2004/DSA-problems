#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    int c[n + m];

    for(int i = 0; i < n; i++) {
        c[i] = a[i];
    }

    for(int i = 0; i < m; i++) {
        c[n + i] = b[i];
    }

    for(int i = 0; i < n + m - 1; i++) {
        for(int j = 0; j < n + m - i - 1; j++) {
            if(c[j] > c[j + 1]) {
                swap(c[j], c[j + 1]);
            }
        }
    }

    for(int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }

    return 0;
}



// class Solution {
//   public:
//     vector<int> findUnion(vector<int>& a, vector<int>& b) {
//         vector<int> ans;

//         int i = 0, j = 0;
//         int n = a.size();
//         int m = b.size();

//         while (i < n && j < m) {

//             if (a[i] < b[j]) {
//                 if (ans.empty() || ans.back() != a[i])
//                     ans.push_back(a[i]);
//                 i++;
//             }
//             else if (a[i] > b[j]) {
//                 if (ans.empty() || ans.back() != b[j])
//                     ans.push_back(b[j]);
//                 j++;
//             }
//             else {
//                 if (ans.empty() || ans.back() != a[i])
//                     ans.push_back(a[i]);
//                 i++;
//                 j++;
//             }
//         }

//         while (i < n) {
//             if (ans.empty() || ans.back() != a[i])
//                 ans.push_back(a[i]);
//             i++;
//         }

//         while (j < m) {
//             if (ans.empty() || ans.back() != b[j])
//                 ans.push_back(b[j]);
//             j++;
//         }

//         return ans;
//     }
// };