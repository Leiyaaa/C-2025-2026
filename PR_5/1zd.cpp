#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double x, y;

    cout << "y = sin^5(x) + |5x - 1.5|" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter x_" << i << ": ";
        cin >> x;

        y = pow(sin(x), 5) + fabs(5 * x - 1.5);

        cout << "y" << i << " = " << y << endl;
    }
}
