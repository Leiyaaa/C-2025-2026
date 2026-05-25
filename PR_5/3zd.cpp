#include <iostream>
#include <cmath>   
#include <iomanip> 
using namespace std;

int main() {
    double a, b, h, x, y;

    cout << "y = x^5 - sqrt(9 - x^2)" << endl;
    cout << "Enter a: ";      //початок
    cin >> a;
    cout << "Enter b: ";      // кінець
    cin >> b;
    cout << "Enter h: ";      // крок
    cin >> h;

    cout << "\n--------------------------" << endl;
    cout << setw(10) << "X" << setw(15) << "Y" << endl;
    cout << "--------------------------" << endl;

    x = a;
    while (x <= b) {
        if (x < -3 || x > 3) {
            cout << setw(10) << x << setw(15) << " does not belong to ODZ" << endl;
        } else {
            y = pow(x, 5) - sqrt(9 - pow(x, 2));
            cout << setw(10) << x << setw(15) << y << endl;
        }
        x += h;
    }

    cout << "--------------------------" << endl;
}
