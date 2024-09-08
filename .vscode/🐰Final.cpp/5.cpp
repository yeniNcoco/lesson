#include <iostream>
#include <vector>
using namespace std;
 
 void func5(vector<int> &myvector, int delitem){
     int valueToBeDeleted = delitem;
    auto it = find(myvector.begin(), myvector.end(),
                   valueToBeDeleted);
 
    if (it != myvector.end()) {
        myvector.erase(it);
    }
 }
int main()
{
    vector<int> myvector = {11, 22, 33, 44, 55};

    cout << "List elements: "<< endl;
    for (auto itr = myvector.begin();
         itr != myvector.end(); itr++) {
        cout << *itr << " ";
    }

    func5(myvector, 44);
 

    cout << "\nList after removing elements: " <<endl;
    for (auto itr = myvector.begin();
         itr != myvector.end(); itr++) {
        cout << *itr << " ";
    }
}