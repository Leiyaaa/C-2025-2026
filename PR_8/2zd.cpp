#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int arr[n] = {3, -5, 2, -7, 8, -4, 8, 1, 0, -9};

    cout << "Initial array:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int maxVal = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) arr[i] = 0;
    }

    cout << "\nArray after replacement:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "\nFirst maximum = " << maxVal << " (index " << maxIndex << ")\n";
}
