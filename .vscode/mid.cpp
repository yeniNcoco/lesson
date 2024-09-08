#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <ctime>
using namespace std;

class Race {
  int Budget = 200;
  int myarray[4] = { 1, 2, 3, 4};
// int myarray[3] = { 1, 2, 3};

public:
// constructor
  Race() {
    srand(time(NULL));           // set the random seed here
  }
void SHOWUSD(){
    cout << Budget<< endl;

}
void EXACTABET(int num1,int num2){
    Budget = Budget - 15;
if(num1==myarray[0]&&num2 == myarray[1]){
    cout<< "WIN AN EXACTA"<<endl;
    Budget = Budget + 150;
}else cout<< "LOSE AN EXACTA"<<endl;
}void EXACTABOXBET(int num1,int num2){
    Budget = Budget - 10;
if(num1==myarray[0]&&num2 == myarray[1]){
    cout<< "WIN AN EXACTABOX"<<endl;
    Budget = Budget + 100;
}
else if(num1== myarray[1]&&num2 == myarray[0]){
    cout<< "WIN AN EXACTABOX"<<endl;
    Budget = Budget + 100;
    }else cout<< "LOSE AN EXACTABOX"<<endl;
}void TRIFECTABET(int num1,int num2, int num3){
    Budget = Budget - 20;
    if(num1==myarray[0]&&num2 == myarray[1]&&num3==myarray[2]){
    cout<< "WIN A TRIFECTA"<<endl;
    Budget = Budget + 250;
}else cout<< "LOSE A TRIFECTA"<<endl;
}void TRIFECTABOXBET(int num1,int num2, int num3){
    Budget = Budget - 18;
    if(num1==myarray[0]&&num2 == myarray[1]&&num3== myarray[2]){
    cout<< "WIN A TRIFECTABOX"<<endl;
    Budget = Budget + 180;}
    else if(num1==myarray[1]&&num2 == myarray[0]&&num3==myarray[2]){
    cout<< "WIN A TRIFECTABOX"<<endl;
    Budget = Budget + 180;}
    else if(num1==myarray[0]&&num2 == myarray[2]&&num3==myarray[1]){
    cout<< "WIN A TRIFECTABOX"<<endl;
    Budget = Budget + 180;}
    else if(num1==myarray[2]&&num2 == myarray[1]&&num3==myarray[0]){
    cout<< "WIN A TRIFECTABOX"<<endl;
    Budget = Budget + 180;}
    else cout<< "LOSE A TRIFECTABOX"<<endl;
}

  // run the imaginary race
  void readysetgo() {

      int n = sizeof(myarray)/sizeof(myarray[0]) ;

      // Loop over array. does a fisher yates scramble of the horses
      for (int i = 0; i < n; i++) {
          // Get a random index of the array past the current index.
          // ... The argument is an exclusive bound.
          //     It will not go past the array's end.
          int randomValue = i + ( rand() % (n - i) );
          // Swap the random element with the present element.
          int randomElement = myarray[randomValue];
          myarray[randomValue] = myarray[i];
          myarray[i] = randomElement;
      }
  }; // end shuffle

  int first() {
      return myarray[0];
  }
  int second() {
      return myarray[1];
  }
  int third() {
      return myarray[2];
  }
  int fourth() {
      return myarray[3];
  }

};

vector<string> SplitWords(string s)
{
	istringstream iss(s);
	vector<string> v;
	while (iss >> s)
	{
		v.push_back(s);
	}
	return v;
}

int main(){
    Race race;
    while(true){
        race.readysetgo();
        cout<<"Pss Cheat the winners are "<< race.first() << race.second() << race.third()<< race.fourth()<< endl;
    
string exacta;
getline(cin,exacta);
//cout<< exacta;
vector<string> exactaword = SplitWords(exacta);
//cout<<exactaword[1];
if(exactaword[0]=="EXACTA"){
    int num1 = stoi(exactaword[1]);
     int num2 = stoi(exactaword[2]);
     race.EXACTABET(num1, num2);
}else if(exactaword[0]=="EXACTABOX"){
   int num1 = stoi(exactaword[1]);
     int num2 = stoi(exactaword[2]);
     race.EXACTABOXBET(num1, num2);
}else if(exactaword[0]=="TRIFECTA"){
    
     int num1 = stoi(exactaword[1]);
      int num2 = stoi(exactaword[2]);
       int num3 = stoi(exactaword[3]);
       race.TRIFECTABET(num1, num2,num3);
}else if(exactaword[0]=="TRIFECTABOX"){
     int num1 = stoi(exactaword[1]);
      int num2 = stoi(exactaword[2]);
       int num3 = stoi(exactaword[3]);
       race.TRIFECTABOXBET(num1, num2,num3);
}else if(exactaword[0]=="balance"){
    race.SHOWUSD();
}else if(exactaword[0]=="exit"){
    break;
}

}
}
