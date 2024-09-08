#include <list>
#include <iostream>
using namespace std;
 
int main()
{
    
    vector<int> demoList;
    for(int i =1; i<=10; i++){
    demoList.push_back(i);
    }
    
    cout << "List elements: ";
    for (auto itr = demoList.begin();
         itr != demoList.end(); itr++) {
        cout << *itr << " ";
    }
    demoList.erase(demoList.begin(),demoList.begin()+3);
    
    cout << "List after removing elements: ";
    for (auto itr = demoList.begin();
         itr != demoList.end(); itr++) {
        cout << *itr << " ";
    }
 
    return 0;
}