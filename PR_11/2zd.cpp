#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date start, end;

    cin >> start.hours >> start.minutes;
    cin >> end.hours >> end.minutes;

    if (start.hours > 24 || start.minutes > 60 ||
        end.hours > 24 || end.minutes > 60 ||
        start.hours < 0 || start.minutes < 0 ||
        end.hours < 0 || end.minutes < 0) 
    {
        cout << "Uncorrect time";
        return 0;
    }

    int startTotal = start.hours * 60 + start.minutes;
    int endTotal   = end.hours * 60 + end.minutes;

    if (endTotal < startTotal)
        endTotal += 24 * 60; 

    int diff = endTotal - startTotal;

    Date result;
    result.hours = diff / 60;
    result.minutes = diff % 60;

    cout << result.hours << ":";

    if (result.minutes < 10) cout << "0";
    cout << result.minutes;

    return 0;
}
