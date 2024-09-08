#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double length;
    double width;
cout << "Enter the length and width>"<< endl;
cin >>length >> width;
double perim =2*(length + width);
cout << fixed;
cout.precision(1);
cout <<"The perimeter is "<<perim<< endl;
cout <<"The perimeter squared is "<< pow(perim,2)<<endl;
    return 0;
}