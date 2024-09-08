#include <stdio.h>
struct Coord 
{ int x;
  int y;
    /* data */
};
void wontchange(struct Coord c){
    c.x = c.x + 100;
    c.y = c.y + 1000;

}
void willchange(struct Coord* c){ //*넣으면 바뀜
    c->x = c->x + 100;
    c->y = c->y + 1000;

}
int main(){
   struct Coord c = {2, 3};
    printf("%d %d\n", c.x, c.y);
    wontchange(c);
    printf("%d %d\n", c.x, c.y);
    willchange(&c);
    printf("%d %d\n", c.x, c.y);
}