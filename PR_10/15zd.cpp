#include <iostream>
using namespace std;

int main() {
    const int m = 3, n = 3;
    int a[m][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mainDiag = 0, sideDiag = 0;

    for(int i = 0; i < 3; i++) {
        mainDiag += a[i][i];          
        sideDiag += a[i][2 - i];       
    }

    
    cout << "Main diagonal sum = " << mainDiag << "\n";
    cout << "Side diagonal sum = " << sideDiag << "\n";
}

