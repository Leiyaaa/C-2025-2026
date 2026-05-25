#include <iostream>
using namespace std;

int main() {
    const int m = 6, n = 4;
    int a[m][n] = {
        {1, 2, 3, 4},
        {6, 7, 8, 9},
        {10, 11, 12, 13},
        {14, 15, 16, 17},
        {18, 19, 20, 21},
        {22, 23, 24, 25}
    };

    for(int j = 0; j < n; j++) {
        int cnt = 0;
        for(int i = 0; i < m; i++) {
            if(a[i][j] % 2 == 0) cnt++;
        }
        cout << "Column " << j+1 << ": " << cnt << " even numbers\n";
    }
}
