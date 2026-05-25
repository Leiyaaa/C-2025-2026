#include <iostream>
#include <string>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    void addReservation(int n);
    void cancelReservation(int n);
    int getId();
private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved) {
    this->id = id;
    this->capacity = capacity;
    if (reserved < 0)
        this->reserved = 0;
    else if (reserved > capacity * 1.05)
        this->reserved = capacity * 1.05;
    else
        this->reserved = reserved;
}

int FlightBooking::getId() { return id; }

void FlightBooking::printStatus() {
    int percentage = (reserved * 100) / capacity;
    cout << "Flight " << id << " : " << reserved << "/" << capacity 
         << " (" << percentage << "%) seats reserved" << endl;
}

void FlightBooking::addReservation(int n) {
    if (reserved + n > capacity * 1.05)
        cout << "Cannot perform this operation" << endl;
    else
        reserved += n;
}

void FlightBooking::cancelReservation(int n) {
    if (reserved - n < 0)
        cout << "Cannot perform this operation" << endl;
    else
        reserved -= n;
}

int findFlight(FlightBooking* flights[], int id) {
    for (int i = 0; i < 10; i++)
        if (flights[i] != nullptr && flights[i]->getId() == id)
            return i;
    return -1;
}

int main() {
    FlightBooking* flights[10] = {nullptr};

    string command;
    int id, n;

    while (true) {
        cin >> command;
        if (command == "quit") break;
        else if (command == "create") {
            cin >> id >> n;
            int idx = findFlight(flights, 0); 
            for (int i = 0; i < 10; i++) {
                if (flights[i] == nullptr) {
                    flights[i] = new FlightBooking(id, n, 0);
                    flights[i]->printStatus();
                    break;
                }
                if (i == 9) cout << "Cannot perform this operation" << endl;
            }
        } else if (command == "delete") {
            cin >> id;
            int idx = findFlight(flights, id);
            if (idx == -1) cout << "Cannot perform this operation" << endl;
            else {
                delete flights[idx];
                flights[idx] = nullptr;
            }
        } else if (command == "add") {
            cin >> id >> n;
            int idx = findFlight(flights, id);
            if (idx == -1) cout << "Cannot perform this operation" << endl;
            else flights[idx]->addReservation(n);
        } else if (command == "cancel") {
            cin >> id >> n;
            int idx = findFlight(flights, id);
            if (idx == -1) cout << "Cannot perform this operation" << endl;
            else flights[idx]->cancelReservation(n);
        }
    }

    for (int i = 0; i < 10; i++)
        delete flights[i];

    return 0;
}