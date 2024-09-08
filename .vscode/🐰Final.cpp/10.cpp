#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
void min_max(array<int, 5> arr){
 auto minval = min_element(arr.begin(), arr.end());
 auto maxval = max_element(arr.begin(), arr.end());
 int minindex = distance(arr.begin(), minval) + 1;
 int maxindex = distance(arr.begin(), maxval) +1 ;
 cout << "min is " << *minval << " rank is " << minindex<< endl;
 cout << "max is " << *maxval << " rank is " << maxindex<< endl;
};
int main(){
    array<int, 5> my_list = {3, 1, 5, 4, 2};
    min_max(my_list);
    

}