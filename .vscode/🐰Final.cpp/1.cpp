#include <list>
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    list<string> State;
 
    State.push_back("California");
    State.push_back("Nevada");
    State.push_back("Arizona");
 
    // List before removing elements
    cout << "List elements: ";
    for (auto itr = State.begin();
         itr != State.end(); itr++) {
        cout << *itr << " ";
    }
    State.remove("Nevada");
    cout << "List after removing: ";
    for (auto itr = State.begin();
         itr != State.end(); itr++) {
        cout << *itr << " ";
    }

}