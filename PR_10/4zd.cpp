#include <iostream>
using namespace std;

int main() {
    const int m = 4, n = 6;
    int a[m][n] = {
        {1,2,3,4,5,6},
        {2,3,4,5,6,7},
        {3,4,5,6,7,8},
        {4,5,6,7,8,9}
    };

    for(int j = 0; j < n; j++) {
        int sum = 0;
        for(int i = 0; i < m; i++) {
            sum += a[i][j];
        }
        cout << "Column " << j+1 << " sum = " << sum << "\n";
    }
}
