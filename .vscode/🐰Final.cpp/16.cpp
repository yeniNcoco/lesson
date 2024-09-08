#include <iostream>
#include <cmath> 

using namespace std;

int bobbleint(int a, int b, int c) {
    return pow(a, 3) + pow(b, 3) + pow(c, 3);
}

double bobbledouble(double a, double b, double c) {
    return pow(a, 3) + pow(b, 3) + pow(c, 3);
}
template <typename T>
T bobblebetter(T a, T b, T c) {
    return pow(a, 3) + pow(b, 3) + pow(c, 3);
}

int main() {
    int result_int = bobbleint(2, 2, 2);
    cout << "bobbleint(2, 2, 2) = " << result_int << endl;

    double result_double = bobbledouble(2.0, 2.0, 2.0);
    cout << "bobbledouble(2.0, 2.0, 2.0) = " << result_double << endl;

    int result_better_int = bobblebetter(2, 2, 2);
    cout << "bobblebetter(2, 2, 2) = " << result_better_int << endl;

    double result_better_double = bobblebetter(2.0, 2.0, 2.0);
    cout << "bobblebetter(2.0, 2.0, 2.0) = " << result_better_double << endl;

    return 0;
}
