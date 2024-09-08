#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    string mycandy = "mycandy.txt";
    ofstream candyfile(mycandy); //mycandy 텍스트파일을 캔디파일이라는 이름으로 연것.
    candyfile<< "Candy Name, Candy Calories, Total Fat Grams"<<endl;
    candyfile << " Jelly Belly, 100, 5" << endl;
    candyfile << " Snickers, 120, 5" << endl;
    candyfile << " Chupa Chups, 80, 5" << endl;
    candyfile << " Godiva, 160, 5" << endl;
    candyfile << " Haribo, 130, 5" << endl;

    candyfile.close();

}