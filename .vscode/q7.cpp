#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=0; i<3 ;i++){
        cout << "Yeni " << i << endl;
    }
    i = 0;
    while(i<3){
        cout << "Yeni " << i << endl;
        i++;
    }
   i=0;
   do{
    cout << "Yeni " << i << endl;
     i++;
   }while(i<3);
}