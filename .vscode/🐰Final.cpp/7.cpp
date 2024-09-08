#include <iostream>
using namespace std;
class Coord{
    public:
    int x;
    int y;
    Coord(int _x, int _y){ //consturct
    x = _x;
    y = _y;
    }
};
void wontchange(Coord c){
    c.x = c.x + 1000;
    c.y = c.y + 1000;
}
void willchange(Coord& c){
     c.x = c.x + 1000;
     c.y = c.y + 1000;
}
int main(){
    Coord c(5,6);
    cout << c.x << c.y << endl;
    wontchange(c);
    cout << c.x << c.y << endl;
    willchange(c);
    cout << c.x <<" "<< c.y << endl;
}
//출력값 정리 띄어쓰기