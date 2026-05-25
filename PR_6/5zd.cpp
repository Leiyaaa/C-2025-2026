#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number N: ";
    cin >> N;

    int p = 1;     
    bool nine = false; 

    while (N > 0) {
        if (N % 10 == 9) { 
            p *= 9;
            nine = true;
        }   
        N /= 10; 
    }

    if (nine)
        cout << "Product of digits 9 = " << p;
    else
        cout << "There are no digits 9.";

}
