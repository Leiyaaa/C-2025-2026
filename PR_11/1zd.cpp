#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date t;
    int addMinutes;

    cin >> t.hours >> t.minutes >> addMinutes;

    if (t.hours < 0 || t.hours > 24 || t.minutes < 0 || t.minutes > 60) {
        cout << "Uncorrect time!";
        return 0;
    }

    int totalMinutes = t.hours * 60 + t.minutes + addMinutes;

    totalMinutes %= (24 * 60); 

    Date result;
    result.hours = totalMinutes / 60;
    result.minutes = totalMinutes % 60;

    if (result.hours < 10) cout << "0";
    cout << result.hours << ":";

    if (result.minutes < 10) cout << "0";
    cout << result.minutes;

    return 0;
}
