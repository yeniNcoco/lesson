#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Candy {
private:
    string name= "none";
    int calories=0;
    int TotalFat = 0;

public:
    // Candy(string name, int calories, int totalFat){
    //     this->name = name;
    //     this->calories=calories;
    //     this->TotalFat=totalFat;
   // }
    int fillfromstream(istringstream &ss, Candy &r) {
        cout << endl << "  attempting to get data" << endl;
        // lets go through the line now, picking up the first three things
        int i = 0;
        while (ss)
        {
            string s;
            if (!getline(ss, s, ',')) break;
            if (i == 0) {
                cout << "   debug- setting name to " << s << endl;
                r.name = s;
            } if (i == 1) {
                cout << "   debug- setting calories to " << s << endl;
                try {
                    r.calories = stoi(s);
                }
                catch (exception &err)  {
                    cout << "         FAIL Bad age encountered" << s << endl;
                    break;
                }
            }
            else if (i == 2) {
                cout << "   debug- setting fat to " << s << endl;
                try {
                    r.TotalFat = stoi(s);
                }
                catch (exception &err)  {
                    cout << "         FAIL Bad age encountered" << s << endl;
                    break;
                }
                
            }
            i++;
        }
        return i;
    }
    
    void printit() {
        cout << " Candy record:" << endl;
        cout << "     Name:" << name << endl;
        cout << "     Calories:" << calories << endl;
        cout << "     Totalfat:" << TotalFat << endl;
    }
};

int main() {
    vector <Candy> candylist;
    string filename = "mycandy.txt";
    // Open up the file, make sure to change this to a path that is valid on your PC
    ifstream infile(filename);

    // check file validity
    if (!infile.is_open()) {
        std::cerr << "Couldn't read file " << filename << endl;
        return 1;
    }
    // while the file is value
    while (infile)
    {
        // get the next line from the file
        string s;
        if (!getline(infile, s)) {
            cout << "All done" << endl;
            break;
        }

        // create a string stream and a new Resident record for
        // pulling the comma separated value out of the line
        istringstream ss(s);
        Candy record;

        // let's send the string stream for this line of data
        // to a method in our resident class which can parse out
        // the data
        if (record.fillfromstream(ss, record) == 3) {
         candylist.push_back(record);
        }
        else {
            cout << "         FAIL Missing or Bad data encountered" << s << endl;
            // i could also release the memory if i wanted to since  record is no good
        }

    } // end while loop

    if (!infile.eof())
    {
        cerr << "Fooey!\n";
    }

    // let's print our data structure'
    cout << endl << "PRINTING Candy DATABASE" << endl;
    for (Candy r : candylist) {
        r.printit();
    }
        ofstream appendit(filename, ios::app);
    if (appendit.is_open()) {
        appendit << "Trolli,60,5\n";
        appendit.close();

 return 0;
    } /// end main method

