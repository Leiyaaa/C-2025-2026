#include <iostream>
using namespace std;

class Square {
private:
    double side;
    double area;

public:
    void set_side(double s) {
        if (s < 0) return;
        side = s;
        area = s * s;
    }

    void print() {
        cout << "Side: " << side << ", Area: " << area << endl;
    }
};

int main() {
    Square sq;
    sq.set_side(5);
    sq.print();
    sq.set_side(-3); 
    sq.print();
    sq.set_side(7);
    sq.print();
    return 0;
}