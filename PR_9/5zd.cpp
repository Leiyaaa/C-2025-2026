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
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    cout << endl;

    int max1 = arr[0];
    int max2 = arr[1];

    if (max2 > max1) swap(max1, max2);

    for (int i = 2; i < m; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    cout << "Second largest: " << max2;
}
