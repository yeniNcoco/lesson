#include <iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter a number: ";
    cin >> num;
    if(num<30){
        cout << " It is low voltage";
    }else if( num <61){
        cout<< "It is medium voltage";
    }else if(num <101){
        cout << "It is high voltage";
    }
}