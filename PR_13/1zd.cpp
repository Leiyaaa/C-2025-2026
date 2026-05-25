#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    const int N = 5;  
    int matrix[N][N];

    srand(time(0));
    int* ptr = &matrix[0][0];

    for(int i = 0; i < N * N; i++) {
        *ptr = rand() % 100; 
        ptr++;
    }

    ptr = &matrix[0][0];

    cout << "Matrix:\n";
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout.width(4);
            cout << *ptr;
            ptr++;
        }
        cout << endl;
    }

    cout << "\nMain diagonal:\n";
    int* mainDiag = &matrix[0][0];

    for(int i = 0; i < N; i++) {
        cout << *mainDiag << " ";
        mainDiag += (N + 1);  
    }

    cout << "\nSecondary diagonal:\n";
    int* secDiag = &matrix[0][N - 1];

    for(int i = 0; i < N; i++) {
        cout << *secDiag << " ";
        secDiag += (N - 1);  
    }

    int even = 0, odd = 0;
    ptr = &matrix[0][0];

    for(int i = 0; i < N * N; i++) {
        if(*ptr % 2 == 0)
            even++;
        else
            odd++;
        ptr++;
    }

    cout << "\n\nEven elements count: " << even;
    cout << "\nOdd elements count: " << odd;
}