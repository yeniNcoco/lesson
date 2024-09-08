#include <iostream>
#include <string>
#include <vector>     
#include <sstream>
#include <ctime>
#include <cstdlib>
using namespace std;
class Wallet{
private: 
string ticker;
double coins;
public:
Wallet(){
    ticker = "BTC";
    coins = 0.0;
    }
void print(){
    cout << ticker << " " << coins << endl;
}
void addcoin(double pluscoin){
    coins = coins + pluscoin;
}
double takecoin(){
    return coins;
}
};
class Datelib{
public: 
string getdate(){
    time_t date = time(0);
    return ctime(&date);
}
};
class Ledger{
private:
vector<string> recordcommand;

public:
void addbuy(string command){
    Datelib date;
    string newcommand = "Bought " + command + " Bitcoin on " + date.getdate();
    recordcommand.push_back(newcommand);
}
void addsell(string command){
    Datelib date;
    string newcommand = "Sold " + command + " Bitcoin on " + date.getdate();
    recordcommand.push_back(newcommand);
}
void printrecord(){
    for(int i = 0;i < recordcommand.size();i++){
    cout << recordcommand[i] <<endl;
}}
};

class GetLive{
public: 
double livebitcoinvalue(){
    return rand() % 10001 + 25000;
}
};

vector<string> SplitWords(string sentence)
{
	string word;
	istringstream iss(sentence);
	vector<string> v;
	while (iss >> word)
	{
		v.push_back(word);
	}
	return v;
}

int main(){
    Wallet wallet;
    Ledger ledger;
    GetLive getlive;
    cout << "choose 1 to buy, 2 to sell, 3 to check price, 4 to see history, 5 to see balance, 6 to exit"<<endl;
    while(true){
        cout<< "Start Bitcoin program"<<endl;
string input;
vector<string> words;
getline(cin, input);
words = SplitWords(input);
if(input.find("buy")!=string::npos || words[0]=="1"){
 wallet.addcoin(stod(words[1]));
 ledger.addbuy(words[1]);
}
else if(input.find("price")!=string::npos|| words[0]=="3"){
  cout<<  getlive.livebitcoinvalue() <<endl;
    }
else if(input.find("balance")!=string::npos|| words[0]=="5"){
 wallet.print();
}
else if(input.find("sell")!=string::npos|| words[0]=="2"){
    wallet.addcoin(stod("-" + words[1]));
ledger.addsell(words[1]);
}
else if(input.find("history")!=string::npos|| words[0]=="4"){
ledger.printrecord();
}
else if(input.find("exit")!=string::npos|| words[0]=="6"){
    cout<< "exit" << endl;
    break;
}
else{ 
    cout<<"Enter again"<<endl;
}
    }
}