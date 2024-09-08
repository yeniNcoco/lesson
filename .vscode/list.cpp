#include <iostream>
#include <list>
using namespace std;

int main()
{
    // defining list
    list<int> mylist{ 1,2,3,4 };

    for (auto i : mylist) { 
        cout << i << ' ';
    }
    return 0;
}

#include <iostream>
#include <iterator>
#include <list>
using namespace std;

// print list
void printlist(list<string>l)
{
    list<string>::iterator it;
    cout << endl;
    for (it = l.begin(); it != l.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}


int main()
{

    list<string> l;

    l.push_back("Jeffrey");
    l.push_back("Nancy");
    l.push_back("Shari");
    l.push_back("Patti");
    printlist(l);

    l.push_front("bonnie");
    l.push_front("clyde");
    printlist(l);

    l.push_back("tom");
    l.push_back("jerry");
    printlist(l);

    cout << "\nfront is : " << l.front();
    cout << "\nback is : " << l.back();
    cout << endl;

    l.pop_front();
    l.pop_back();
    printlist(l);

    l.reverse();
    printlist(l);

    l.sort(); // note: it's case sensitive for default sort
    printlist(l);

    return 0;
}



#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>
using namespace std;

// print list
void printlist(list<string>l)
{
    list<string>::iterator it;
    cout << endl;
    for (it = l.begin(); it != l.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}


int main()
{

    list<string> l;

    l.push_back("Jeffrey");
    l.push_back("Nancy");
    l.push_back("Shari");
    l.push_back("Patti");
    printlist(l);

    // print the list BACKWARDS
    cout << endl;
    for (auto it = l.rbegin(); it != l.rend(); ++it)
        cout << '\t' << *it;
    cout << '\n';

    l.remove("Nancy"); //지우는건 쉬운데 찾고 수정하는게 좀 까다로움
    printlist(l);

    // find shari's position/iterator
    std::list<string>::iterator iter = 
        std::find(l.begin(), l.end(), "Shari");
    // insert MooMoo right before it
    l.insert(iter, "MooMoo");
    printlist(l);

    // find MooMoo and print it's value
    auto pos = find(l.begin(), l.end(), "MooMoo");
    if (pos != l.end())
        cout << "We found " << *pos << endl;


    auto it = l.begin();
    cout << *it << endl;
    it++;
    cout << *it << endl;

    return 0;
}


