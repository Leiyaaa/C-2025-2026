#include <iostream>
#include <string>
using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
private:
    int numerator;
    int denominator;
};

Fraction::Fraction(int numerator, int denominator) {
    if (denominator < 0) {
        this->numerator = -numerator;
        this->denominator = -denominator;
    } else {
        this->numerator = numerator;
        this->denominator = denominator;
    }
}

string Fraction::toString() {
    int num = numerator;
    int den = denominator;

    bool negative = num < 0;
    if (negative) num = -num;

    int whole = num / den;
    int remainder = num % den;

    string result = "";

    if (negative && (whole > 0 || remainder > 0))
        result += "-";

    if (remainder == 0) {
        result += to_string(whole);
    } else if (whole == 0) {
        result += to_string(num) + "/" + to_string(den);
    } else {
        result += to_string(whole) + " " + to_string(remainder) + "/" + to_string(den);
    }

    return result;
}

double Fraction::toDouble() {
    return (double)numerator / denominator;
}

int main() {
    int num, den;
    char slash;
    cin >> num >> slash >> den;

    Fraction fraction(num, den);
    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;

    return 0;
}