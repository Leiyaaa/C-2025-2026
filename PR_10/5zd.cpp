#include <iostream>
using namespace std;

int main() {
    const int m = 3, n = 4;
    int a[m][n] = {
        {1, 5, 12, 4},
        {9, 8, 7, 3},
        {6, 14, 2, 11}
    };

    int maxVal = a[0][0];
    int maxI = 0, maxJ = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] > maxVal) {
                maxVal = a[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

   cout << "Max value: " << maxVal << " (row " << maxI+1 << ", column " << maxJ+1 << ")\n";

}
