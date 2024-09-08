#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Wheel {
public:
    int rimsize;
    string brand;

    Wheel(int r, const string& b) : rimsize(r), brand(b) {}

    void printit() const {
        cout << "Rimsize: " << rimsize << ", Brand: " << brand << endl;
    }
};
class Car {
public:
    string name;
    vector<Wheel> wheels;

    Car(const string& n) : name(n) {}

    void addwheel(const Wheel& w) {
        wheels.push_back(w);
    }

    void printit() const {
        cout << "Car Name: " << name << endl;
        for (const auto& wheel : wheels) {
            wheel.printit();
        }
    }
};

int main() {
    Car c("Toyota");

    Wheel w1(14, "Michelin");
    Wheel w2(12, "Bridgestone");
    Wheel w3(15, "Goodyear");
    Wheel w4(17, "Pirelli");

    c.addwheel(w1);
    c.addwheel(w2);
    c.addwheel(w3);
    c.addwheel(w4);

    c.printit();

    return 0;
}
