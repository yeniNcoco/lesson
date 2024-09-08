#include <iostream>
using namespace std;
int main(){
int x = -1;//while enter 할 수 있게 condition 설정해주기
while (x != 0){
    cout<< "enter a number (0 to exit)";
    cin >> x;
}
cout << "Goodbye"<< endl;
//근데 이렇게하면 x값 세팅 안되어 있어서 실행 안됨.
    return 0
}