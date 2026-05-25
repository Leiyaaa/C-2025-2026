#include <iostream>
using namespace std;

int main() {
    const int m = 4, n = 7;
    int a[m][n] = {
        {8, 7, 6, 5, 4, 3, 2},
        {9, 10, 11, 12, 13, 14, 15},
        {1, 20, 30, 40, 50, 60, 70},
        {5, 4, 3, 2, 1, 0, -1}
    };

    int minVal = a[0][0];
    int minI = 0, minJ = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] < minVal) {
                minVal = a[i][j];
                minI = i;
                minJ = j;
            }
        }
    }

    cout << "Min value: " << minValue
         << " (row " << minRow+1 
         << ", column " << minCol+1 << ")\n";
}
