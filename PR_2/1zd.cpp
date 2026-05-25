#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Введiть X: ";
    cin >> x;
    cout << "Введiть Y: ";
    cin >> y;

    double xx;
    if (x < 0) {
        xx = x * -1;
    } else {
        xx = x;
    }

    double yy;
    if (y < 0) {
        yy = y * -1;
    } else {
        yy = y;
    }

    double suma = xx + yy;

    if (suma <= 1) {
        cout << "Точка в облластi" << endl;
    } else {
        cout << "Точка не в облластi" << endl;
    }
}
