#include <iostream>
using namespace std;

int main() {
    const int m = 12;
    int arr[m] = {5, -2, 10, 0, 7, 1, -5, 3, 9, -8, 4, 6};

    cout << "Initial array:\n";
    for (int i = 0; i < m; i++) cout << arr[i] << " ";
    cout << endl;


   
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nAscending array:\n";
    for (int i = 0; i < m; i++) cout << arr[i] << " ";
    cout << endl;


    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nDescending array:\n";
    for (int i = 0; i < m; i++) cout << arr[i] << " ";
    cout << endl;
}
