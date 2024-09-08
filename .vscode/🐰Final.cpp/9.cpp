#include <iostream>
#include <vector>
#include <iomanip> //setw
using namespace std;
int main(){
vector<double> height = {1.47, 1.5, 1.52, 1.55, 1.57, 1.6, 1.63, 1.65, 1.68, 1.7, 1.73, 1.75, 1.78, 1.8, 1.83, 1.81, 2.20};
vector<double> weight = {52.21, 53.12, 54.48, 55.84, 57.2, 58.57, 59.93, 61.29, 63.11, 64.47, 66.28, 68.1, 69.92, 72.19, 74.46, 49.12, 85.65};
vector<double> bmi = {24.16, 23.61, 23.58, 23.24, 23.21, 22.88, 22.56, 22.51, 22.36, 22.31, 22.15, 22.24, 22.07, 22.28, 22.23};
double bmi2 = weight[weight.size()-1]/(height[height.size()-1]*height[height.size()-1]);
double bmi1 = weight[weight.size()-2]/(height[height.size()-2]*height[height.size()-2]);
bmi.push_back(bmi1);
bmi.push_back(bmi2);
cout << bmi1 <<" "<< bmi2<<endl;



}