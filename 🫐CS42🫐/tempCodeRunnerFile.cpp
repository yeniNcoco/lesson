#include <iostream>
using namespace std;
int main(){
    int iSecret,iGuess;
    int tot =0;
    int Player =0;
    int Dealer =0;
srand (time(0));
while(1){
iSecret = rand()%101;
cout<<"\nGuess the number (between 0 and 100): ";
cin>> iGuess;
if(iGuess == 21){
 cout << "Number of hands played: "<< tot<< endl;
 cout << "Dealer won: " << Dealer <<" Player won: "<< Player << endl;
 cout << "You're "<< Player<< " for "<< tot<< " Come back to the cs 52 Casino soon";
    break;
}
else if(abs(21-iSecret) < abs(21-iGuess)){
    cout<<"Dealer has "<< iSecret << " Dealer wins";
    Dealer ++;
}else if(abs(21-iSecret) == abs(21-iGuess)){
    cout<< "Dealer has "<< iSecret <<" nobody wins";
    
}else{ cout<< "Dealer has "<< iSecret <<" Player wins";
      Player ++;}
 tot ++;}

}