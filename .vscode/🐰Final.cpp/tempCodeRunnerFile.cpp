#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // for sort
using namespace std;

// Function to find missing numbers
vector<int> missing(const vector<int>& v, int N) {
    vector<int> missingnum;
    set<int> nums(v.begin(), v.end());

    // Find missing numbers from 1 to N
    for (int i = 1; i <= N; ++i) {
        if (nums.find(i) == nums.end()) {
            missingnum.push_back(i);
        }
    }

    return missingnum;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Enter the series of numbers (space-separated, end with non-numeric character): " << endl;
    vector<int> v;
    while (true) {
        int num;
        if (!(cin >> num)) break; // Exit loop if input is not an integer
        v.push_back(num);
    }

    // Clear the error flag set by non-integer input
    cin.clear();
    // Ignore the remaining characters in the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Find missing numbers
    vector<int> missingvec = missing(v, N);

    // Print missing numbers
    cout << "Missing numbers: ";
    for (int num : missingvec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
