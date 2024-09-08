#include <iostream>
#include <string>
#include <list>
#include <iomanip>
using namespace std;
class entrant{
private:
    string HorseName;
    string JokeyName;
public:
    entrant(string horse, string jokey){
        this->HorseName=horse;
        this->JokeyName=jokey;
    }
    string gethorsename(){
        return "Horse: " + HorseName;
    }
    string getjokeyname(){
        return "Jockey: " + JokeyName;
      }
    
};

class Race{
private:
    string Name;
    string Time;
    list<entrant> entrants;
    public:
    Race(string name, string time, list<entrant> addentrant){
        this->Name=name;
        this->Time=time;
        this->entrants = addentrant;
    }
    void printclass(){
        cout << Name<<" " << Time<< endl<<endl;
        for(entrant e : entrants){
            cout<< "    "<< e.gethorsename()<<endl;
            cout<< "    "<< e.getjokeyname()<<endl<< endl;
        }
        

    }

};

int main(){
    list <entrant> Race1entrant;
    list <entrant> Race2entrant;
    list <entrant> Race3entrant;
    Race1entrant.push_back(entrant("Misty Spirit","John Valazquez"));
    Race1entrant.push_back(entrant("Frankly","Mike E Smith"));
    Race2entrant.push_back(entrant("Rage"," Russell Baze"));
    Race3entrant.push_back(entrant("Secretariat"," Bill Shoemaker"));
    Race3entrant.push_back(entrant("Man o War"," David A Gall"));
    Race3entrant.push_back(entrant("Seabiscuit"," Angel Cordero Jr"));
    Race RACE1("RACE 1", "10:00 AM May 12, 2024", Race1entrant);
    Race RACE2("RACE 2", "11:00 AM May 12, 2024", Race2entrant);
    Race RACE3("RACE 3", "12:00 PM May 12, 2024", Race3entrant);
    RACE1.printclass();
    RACE2.printclass();
    RACE3.printclass();
}