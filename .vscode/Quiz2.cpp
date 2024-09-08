#include <iostream>
using namespace std;

class Foo {
private: //외부에선 사용 불가 =>set get method 이용
 int x;
public: 
 void setX(int a){ //setter type은 보통 void 수정용도
     x = a;
 }
 int getX(){ //값 전달
    return x;
 }
};

int main(){
    Foo set;
    set.setX(5);
    cout << set.getX() << endl;
}