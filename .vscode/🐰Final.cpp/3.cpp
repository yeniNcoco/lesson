
#include <algorithm> 
#include <iostream> 
#include <vector> 
#include <string>
  
using namespace std; 
int occurrences(vector<int> values, int target){
    int cnt = count(values.begin(), values.end(), target); 
    return cnt;
    }
int occurrences(vector<string> values, string target){
    int cnt = count(values.begin(), values.end(), target); 
    return cnt;
    }
int main() 
{ 
    // Define a vector of doubles and a target value 
    vector<int> values = { 1 ,2 ,2 ,2 ,3 ,4 }; 
    int target = 2; 
    vector<string> values2 = {"Patti", "Shari", "Shari", "Shari", "Nancy", "Jeffrey"};
    int cnt=occurrences(values, target);
    string target2 = "Shari";
    // Check if the target value was found 
    if (cnt > 0) { 
        cout << "Element "<< target<< " found " << cnt <<" times in vector.\n"; 
    } 
    else { 
        cout << "Element not found in vector.\n"; 
    } 

    int cnt2 = occurrences(values2, target2);
    if (cnt2 > 0) { 
        cout << "Element "<< target2<< " found " << cnt2 <<" times in vector.\n"; 
    }
    else { 
        cout << "Element not found in vector.\n"; 
    } 
  
    return 0; 
}
