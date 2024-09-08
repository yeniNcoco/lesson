#include <iostream>
#include <string>
using namespace std;

int flipfirst(string &firstName, string &lastName) {
    if (firstName.empty() || lastName.empty()) {
        return 0;
    }

    char firstCharFirstName = firstName[0];
    char firstCharLastName = lastName[0];
    firstName.replace(0, 1, 1, firstCharLastName);
    lastName.replace(0, 1, 1, firstCharFirstName);

    return 1;
};

int main() {
    string firstName, lastName;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    int result = flipfirst(firstName, lastName);
    if (result == 0) {
        cout << "One or both of the names were empty. No changes made." << endl;
    } else {
        cout << "After flipping the first letters: " << firstName << " " << lastName << endl;
    }

    return 0;
}
