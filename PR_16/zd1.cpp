#include <iostream>
#include <ctime>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0)   return true;
    return false;
}

int monthLength(int year, int month) {
    switch (month) {
        case 2:
            return isLeap(year) ? 29 : 28;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 31;
    }
}

Date today() {
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    Date d;
    d.year  = tl.tm_year + 1900;
    d.month = tl.tm_mon + 1;
    d.day   = tl.tm_mday;
    return d;
}

int daysBetween(Date birth, Date end) {
    int days = 0;

    for (int m = birth.month; m <= 12; m++)
        days += monthLength(birth.year, m);
    days -= birth.day;

    for (int y = birth.year + 1; y < end.year; y++)
        days += isLeap(y) ? 366 : 365;

    for (int m = 1; m < end.month; m++)
        days += monthLength(end.year, m);
    days += end.day;

    return days;
}

int main() {
    Date birth = {2007, 9, 12};  

    Date now = today();

    cout << "Today: " << now.year << "-" << now.month << "-" << now.day << endl;
    cout << "Days since birth: " << daysBetween(birth, now) << endl;

    return 0;
}