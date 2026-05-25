#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    const double epsilon = 0.000001; 

    double result1 = 1.0 / a;
    double result2 = 1.0 / b;

    if (fabs(result1 - result2) < epsilon)
        cout << "Results are equal";
    else
        cout << "Results are not equal";

}
