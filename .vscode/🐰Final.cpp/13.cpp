#include <iostream>
#include <cmath>  
#include <iomanip>
using namespace std;

double z(int score, int mean, int sd) {
    double z_score = static_cast<double>(score - mean) / sd;
    return z_score;
}
double std_error(int sd, int n) {
    double standard_error = static_cast<double>(sd) / sqrt(n);
    return standard_error;
}

int main() {
    int score = 190;
    int mean = 150;
    int sd = 25;

    double z_score = z(score, mean, sd);

    int n = 10;

    double standard_error = std_error(sd, n);

    cout << fixed << setprecision(2);
    cout << "Z-score: " << z_score << endl;
    cout << "Standard Error: " << standard_error << endl;

    return 0;
}

