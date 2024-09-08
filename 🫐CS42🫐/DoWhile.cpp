#include <iostream>
using namespace std;
int main(){
    // do while은 무조건 한번은 실행됨. 선타투 후뚜맞마냥 일단 실행시키고 판단
    //최소 한번은 실행시키고 싶을때 do while 쓰면됨
    int code = 1007;
    int guess;
    do{
        cout << "guess the code>";
        cin>> guess;
    }while(guess == code);





    return 0;
}