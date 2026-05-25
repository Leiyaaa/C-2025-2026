#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout << "Введіть обмеження";

    cin >> x;

    int z;
    cout << "Введіть число для обчислення: ";
    cin >> z;

    double y;
    if (x <= 1) {
        y = (6 * pow(z, 2) - 5) / 3.0;
    } else {
        y = (5 * pow(z, 2) - 4) / 12.0;
    }
    cout << "Result: " << y;
}
