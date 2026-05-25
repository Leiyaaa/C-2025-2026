#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand((unsigned int)time(nullptr)); // генерація випадкових чисел від поточного часу у секундах

    const int ROWS = 3;
    const int COLS = 3;

    // встановлюємо вказівник на вказівник, вказівник на адресу поверхів і вказівник на адресу магазинів, які там знаходяться
    int** matrix = new int*[ROWS]; 
    for (int i = 0; i < ROWS; i++) {
        matrix[i] = new int[COLS]; // для кожного рядка створємо стовпець
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 21 - 10;
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }

    cout << "\nMain diagonal: ";
    for (int i = 0; i < ROWS; i++) {
        cout << matrix[i][i];
        if (i < ROWS - 1) cout << ", ";
    }
    cout << endl;

    cout << "Secondary diagonal:  ";
    for (int i = 0; i < ROWS; i++) {
        cout << matrix[i][COLS - 1 - i];
        if (i < ROWS - 1) cout << ", ";
    }
    cout << endl;

    int even = 0, odd = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] % 2 == 0) even++;
            else odd++;
        }
    }

    cout << "\nEven elements count:" << even << endl;
    cout << "Odd elements count:" << odd << endl;

    // видаляємо кожен рядок окремо, а потім і масив вказівників
    for (int i = 0; i < ROWS; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;

    return 0;
}