#include <string>
#include <iostream>
using namespace std;

int main() {
    string password;
    getline(cin, password);

    bool valid = true;

    if (password.length() < 8) {
        cout << "The password must be 8 characters long" << endl;
        valid = false;
    }

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        if (islower(c)) hasLower = true;
        if (isdigit(c)) hasDigit = true;
        if (ispunct(c)) hasSpecial = true;
    }

    if (!hasUpper) { cout << "The password must have at least one upper case letter" << endl; valid = false; }
    if (!hasLower) { cout << "The password must have at least one lower case letter" << endl; valid = false; }
    if (!hasDigit) { cout << "The password must have at least one digit" << endl; valid = false; }
    if (!hasSpecial) { cout << "The password must have at least one special character" << endl; valid = false; }

    if (valid)
        cout << "The password is valid" << endl;

    return 0;
}