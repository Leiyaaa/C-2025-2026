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
        arr[i] = rand() % 11 - 5; 
        cout << arr[i] << " ";
    }
    cout << endl;

    int index = -1;

    for (int i = 0; i < m; i++) {
        if (arr[i] == 0) {
            index = i;
            break;   
        }
    }

    if (index == -1)
        cout << "No zero elements in array";
    else
        cout << "First zero element index: " << index;
}
