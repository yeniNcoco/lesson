#include <iostream>
using namespace std;

class Foo {
private:
 
public: 
  int x;
void setX(int a){ //setter type은 보통 void 수정용도
     x = a;
 }
 int getX(){ //값 전달
    return x;
 }
};

int main(){
 Foo instance;
 instance.x = 5;
 cout << instance.x << endl;
}