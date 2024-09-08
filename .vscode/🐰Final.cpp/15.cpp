#include <iostream>
#include <string>

using namespace std;

class Hijinx {
public:
    string instigator;
    string propagator;
    string lowling;

    Hijinx() : instigator("I"), propagator("don't"), lowling("know") {}

    Hijinx(string instigator, string propagator, string lowling) {
        this->instigator = instigator;
        this->propagator = propagator;
        this->lowling = lowling;
    }

    void printit() const {
        cout << "Instigator: " << instigator << ", Propagator: " << propagator << ", Lowling: " << lowling << endl;
    }

    friend ostream& operator<<(ostream& os, const Hijinx& h);

    friend istream& operator>>(istream& is, Hijinx& h);
};

ostream& operator<<(ostream& os, const Hijinx& h) {
    os << "Instigator: " << h.instigator << ", Propagator: " << h.propagator << ", Lowling: " << h.lowling;
    return os;
}
istream& operator>>(istream& is, Hijinx& h) {
    cout << "Enter instigator: ";
    is >> h.instigator;
    cout << "Enter propagator: ";
    is >> h.propagator;
    cout << "Enter lowling: ";
    is >> h.lowling;
    return is;
}

int main() {
    Hijinx h;
    cout << "Input Operator overload" << endl;
    cin >> h;
    cout << "Printing it out the easy way" << endl;
    h.printit();
    cout << "Printing using the output Operator overload" << endl;
    cout << h << endl;
    return 0;
}
