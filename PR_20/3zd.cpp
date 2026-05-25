#include <iostream>
using namespace std;

class AdHocSquare {
public:
    AdHocSquare(double s) { side = s; }

    void set_side(double s) { side = s; }

    double get_area() { return side * side; }

private:
    double side;
};

class LazySquare {
public:
    LazySquare(double s) {
        side = s;
        area = s * s;
        side_changed = false;
    }

    void set_side(double s) {
        side = s;
        side_changed = true;
    }

    bool changed() { return side_changed; }

    double get_area() {
        if (side_changed) {
            area = side * side;
            side_changed = false;
        }
        return area;
    }

private:
    double side;
    double area;
    bool side_changed;
};

int main() {
    AdHocSquare a(4);
    cout << "AdHoc area: " << a.get_area() << endl;
    a.set_side(6);
    cout << "AdHoc area: " << a.get_area() << endl;

    LazySquare l(4);
    cout << "Lazy area: " << l.get_area() << endl;
    cout << "Changed: " << l.changed() << endl;
    l.set_side(6);
    cout << "Changed: " << l.changed() << endl;
    cout << "Lazy area: " << l.get_area() << endl;
    return 0;
}