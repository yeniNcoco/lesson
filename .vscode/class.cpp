#include <iostream>
#include <array>
#include <stdio.h>

using namespace std;

class Race {

    int myarray[4] = { 1, 2, 3, 4 }; //represents the horses

public: //means 한버 clone만들면 밖에서도 excess 가능

    // constructor clone 만드는거 return 타입 없고 class랑 이름 동일. 그냥 초기화 하는과정 같은거 별다른 의미는 없음
    Race() {
        // set the random seed here
    }

    // run the imaginary race
    void readysetgo() {

        int n = sizeof(myarray) / sizeof(myarray[0]);

        // Loop over array. does a fisher yates scramble of the horses
        for (int i = 0; i < n; i++) {
            // Get a random index of the array past the current index.
            // ... The argument is an exclusive bound.
            //     It will not go past the array's end.
            int randomValue = i + (rand() % (n - i));
            // Swap the random element with the present element.
            int randomElement = myarray[randomValue];
            myarray[randomValue] = myarray[i];
            myarray[i] = randomElement;
        }
    }; // end shuffle

    int first() {
        return myarray[0];
    }
    int second() {
        return myarray[1];
    }
    int third() {
        return myarray[2];
    }
    int fourth() {
        return myarray[3];
    }

}; //class followed by ;

int main()
{
    Race r; //instance 

    r.readysetgo();

    // print out the order that the houses come in
    cout << r.first() << " " << r.second() << " "
        << r.third() << " " << r.fourth() << endl;

    // lets hard code what they picked instead
    // of getting it from the user for the
    // sake of this example
    int pick1 = 3;
    int pick2 = 2;
    cout << "you picked " << pick1 << " " << pick2 << endl;

    // how would we check to see if they won exacta?
    if (pick1 == r.first() and pick2 == r.second()) {
        cout << "you won!" << endl;
    }
    else {
        cout << "you lost" << endl;
    }

    return 0;

}


