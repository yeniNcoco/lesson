#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=0; i<3 ;i++){
        cout << "Yeni" << endl;
    }
    i = 0;
    while(i<3){
        cout << "Yeni" << endl;
        i++;
    }
   i=0;
   do{
    cout << "Yeni" << endl;
     i++;
   }while(i<3);
}