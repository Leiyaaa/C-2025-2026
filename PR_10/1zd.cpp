#include <iostream>
using namespace std;

int main() {
    const int m = 4, n = 3;
    int a[m][n] = {
        {1, 2, 4},
        {7, 8, 10},
        {3, 6, 9},
        {12, 14, 5}
    };

    for(int i = 0; i < m; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(a[i][j] % 2 == 0) cnt++;
        }
        cout << "Row " << i+1 << ": " << cnt << " even numbers\n";
    }
}
