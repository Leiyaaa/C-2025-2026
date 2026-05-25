#include <iostream>
using namespace std;

int main() {
    const int m = 5, n = 7;
    int a[m][n] = {
        {1,2,3,4,5,6,7},
        {2,4,6,8,10,12,14},
        {1,1,1,1,1,1,1},
        {7,6,5,4,3,2,1},
        {9,8,7,6,5,4,3}
    };

    for(int i = 0; i < m; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        cout << "Row " << i+1 << " sum = " << sum << "\n";
    }
}
