#include <iostream>
#include <vector>
using namespace std;

vector<int> zeros_and_ones(const vector<int>& s) {
    vector<int> counts(2, 0);
    for (int num : s) {
        if (num == 0 || num == 1) {
            counts[num]++;
        }
    }

    return counts;
}

int main() {
    vector<int> s = {1,0,1,0,0,1,0,0,1,0,0,1,1,1,1,0,0,0,1,0,1,1,1,1,1};
    vector<int> result = zeros_and_ones(s);

    cout << "{0: " << result[0] << ", 1: " << result[1] << "}" << endl;

    return 0;
}
