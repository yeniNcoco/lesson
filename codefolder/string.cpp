#include <iostream>
#include <string>
using namespace std;

int main(){
string num;
num = "Apple";
cout<< num << endl;
cout<< num + " is fruit" << endl;
string a;
a = "Grape";
cout <<(num == a)<< endl;
cout <<(num != a)<< endl;
string b;
b = num.substr(1,3);
cout<<b<<endl;
string c = num.substr(0,1);
cout<<c<<endl;
char d = num[0];
cout<<d<<endl;
string e = a + " is fruit";
a.append(" is fruit");
cout << e << endl;
cout << a << endl;

a.replace(0,5,"pineapple");
cout << a << endl;

cout << a.find("p") << endl;

string text = a;
// Loop through each character in the string
    for (int x = 0; x < text.length(); x++)
    {
        // If it's the first character of the string or after a space, capitalize it
        if (x == 0 || text[x - 1] == ' ')
        {
            text[x] = toupper(text[x]); // Convert the character to uppercase
        }
    }
    cout << text << endl;





 
}