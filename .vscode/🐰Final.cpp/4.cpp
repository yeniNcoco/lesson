#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> name ={"Eenie", "Meenie", "Miney", "Mo" };
    cout << "List elements: ";
    for (auto itr = name.begin();
         itr != name.end(); itr++) {
        cout << *itr << " ";
    }
    name.erase(name.begin() + 2);
    cout << "List after removing elements: ";
    for (auto itr = name.begin();
         itr != name.end(); itr++) {
        cout << *itr << " ";
    }

}