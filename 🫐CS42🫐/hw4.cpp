#include <list>
#include <iostream>
using namespace std;
 
int main()
{
    list<int> demoList;
 
    demoList.push_back(1);
    demoList.push_back(3);
    demoList.push_back(5);
    demoList.push_back(7);
    demoList.push_back(9);
 
    cout << "Elements of list: ";
    for (auto itr = demoList.begin();
         itr != demoList.end(); itr++) {
        cout << *itr << " ";
    }
 
}