#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    string city; 
};

void print(Person* person) {
    cout << person->name << " is " << person->age << " years old" << endl;
    cout << "City: " << person->city << endl;
}

int main() {
    Person person;
    person.name = "Harry";
    person.age = 23;
    person.city = "London";
    cout << "Meet " << person.name << endl; 
    print(&person);

    Person person2;
    person2.name = "Anna";
    person2.age = 20;
    person2.city = "Kyiv";
    print(&person2);

    return 0;
}