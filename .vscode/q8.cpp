#include <iostream>
#include <string>
using namespace std;
int main(){
    int count = 0;
    string num;
    while(true){
        cout << "Enter a number> ";
    cin >> num;
    if(num == "stop"){
        cout << "The total number of entries over 50 is: "<< count<< endl;
        break;
    }
    bool check = 0;
    for(int i=0; i<num.length(); i++){
        if(num[i]>='a'&&num[i]<='z'){
            check = 1;
            break;
        }
        if(num[i]>='A'&&num[i]<='Z'){
            check = 1;
            break;
        }
    }if(check == 1){
        cout<< "Error bad input " << endl;
        continue;
    }
    int a = stoi(num);
    if(a>50){
        count++;
    }
    }
}