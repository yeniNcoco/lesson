#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
int iSecret,iGuess;
srand (time(0));
iSecret = rand()%101; //원래는 0~2억
cout<<"Guess the number (between 0 and 100): ";
cin>> iGuess;
if(abs(21-iSecret) < abs(21-iGuess)){
    cout<<"Dealer has "<< iSecret << " Dealer wins";
}else if(abs(21-iSecret) == abs(21-iGuess)){
    cout<< "Dealer has "<< iSecret <<" nobody wins";
}else cout<< "Dealer has "<< iSecret <<" Player wins";
}