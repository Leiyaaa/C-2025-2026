#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand((unsigned int)time(nullptr));

    const int N = 10;

    double* arr = new double[N];

    for (int i = 0; i < N; i++) {
        arr[i] = (double)rand() / RAND_MAX * 4.0 - 2.0;
    }

    cout << "Array: ";
    for (int i = 0; i < N; i++) {
        cout << fixed << setprecision(3) << arr[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;

    int positive = 0, negative = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] > 0) positive++;
        else if (arr[i] < 0) negative++;
    }

    cout << "Number of positive numbers: " << positive << endl;
    cout << "Number of negative numbers: " << negative << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}