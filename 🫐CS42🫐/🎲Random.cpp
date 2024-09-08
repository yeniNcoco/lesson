#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<< time(NULL);// 1/1/1970~지금까지의 시간
    srand((unsigned int)time(NULL)); //Seedrandom we need seed, standard value.
    //랜덤함수의 범위 0~32767
    cout << rand();
    int numArr[10];
    for(int i=0; i<10; i++){
        numArr[i] = rand();
        cout << numArr[i]<< ' ';
    }
}