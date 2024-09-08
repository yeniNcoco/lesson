#include <iostream>
using namespace std;
int main(){
    int cakeType;
    int cakeSize;
    double cakePrice;
    cin>> cakeType;
    if(cakeType == 0){
        cakeSize = 10;
        cout<< "the cake size is " << cakeSize <<endl;
    }else if(cakeType == 1){
        cakeSize = 11;
        cout<< "the cake size is " << cakeSize <<endl;
    }else if(cakeType == 2){
        cakeSize =12;
        cout<< "the cake size is " << cakeSize <<endl;
}else cout<< "the cake type is invaild"<< endl;
}