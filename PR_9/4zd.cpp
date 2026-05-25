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

    int A;
    cout << "Enter A: ";
    cin >> A;

    int count = 0;
    for (int i = 0; i < m; i++) {
        if (arr[i] > A) count++;
    }

    cout << "Elements greater than A: " << count;
}
