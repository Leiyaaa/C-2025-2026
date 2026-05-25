#include <iostream>
using namespace std;

int main(void) {
    double pi4 = 0.0;
    long n;
    cout << "Number of iterations? ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of iterations must be positive." << endl;
        return 0;
    }

    double sign = 1.0;
    for (long i = 0; i < n; ++i) {
        double denom = 2.0 * i + 1.0;   
        pi4 += sign / denom;
        sign = -sign;                   
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.0) << endl;
        
}
