#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int m = 10;
    int arr[m];

    srand(time(0));

    cout << "Array: ";
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50; 
        cout << arr[i] << " ";
    }
    cout << endl;

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < m; i++) {
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    cout << "After swap: ";
    for (int i = 0; i < m; i++) cout << arr[i] << " ";
}
