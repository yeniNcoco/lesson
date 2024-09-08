 
#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "sum = " << (a + b);
} //not calculating something.It just prints out.No return type or statement.그래서 void


// Driver code
int main()
{
    add(10, 2);

    return 0;
}



 
#include <iostream>
using namespace std;


void add(int a, int b)
{
    cout << "adding ints" << endl;
    cout << "sum = " << (a + b) << endl;
}//그냥 더해도 되지만..

void add(double a, double b)
{
    cout << "adding doubles" << endl;
    cout << "sum = " << (a + b) << endl;
}//둘이 같은 기능을 하는 함수지만 다루는 data type이 다름.

// Driver code
int main()
{
    add(10, 2); //if you send this, 아 정수 입력했네.하고 정수를 parameter로 다루는 함수로 들어감
    add(5.3, 6.2); //double이네?doubl을 parameter로 다루는 놈한테 가즈아~

    return 0;
}


#include <iostream>
using namespace std;


    void printit(int i) {
        cout << "Printing int: " << i << endl;
    }
    void printit(double  f) {
        cout << "Printing float: " << f << endl;
    }
    void printit(char c) {
        cout << "Printing character: " << c << endl;
    }
    void printit(string s) {
        cout << "Printing string: " << s << endl;
    }
    void printit(float x, float y) {
        cout << "x and y: " << x << " " << y << endl;
    }


int main(void) {


    // Call print to print integer
    printit(5);

    // Call print to print float
    printit(500.263);

    // Call print to print character
    printit('Y');

    // Call print to print string
    printit("Yoo Hoo");

    // Call  to print two doubles
    printit(2.0, 3.0);

    return 0;
}//This example has FIVE overloaded print functions.t prints an int, a double, a char, a string, and  two floats.   Since it’s all about printing they  decided to overload this.



#include <iostream>
using namespace std;

class printData { //printing하는 놈들 다 모아서 class로 만듦
public:

    void printit(int i) {
        cout << "Printing int: " << i << endl;
    }
    void printit(double  f) {
        cout << "Printing float: " << f << endl;
    }
    void printit(char c) {
        cout << "Printing character: " << c << endl;
    }
    void printit(string s) {
        cout << "Printing string: " << s << endl;
    }
    void printit(float x, float y) {
        cout << "x and y: " << x << " " << y << endl;
    }



};

int main(void) {
    printData pd;

   // Call print to print integer
    pd.printit(5);

    // Call print to print float
    pd.printit(500.263);

    // Call print to print character
    pd.printit('Y');

    // Call print to print string
    pd.printit("Yoo Hoo");

    // Call  to print two doubles
   pd. printit(2.0, 3.0);


    return 0;
}


#include <iostream>
using namespace std;

// function with 2 parameters
void displayit(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

// function with double type single parameter
void displayit(double var) {
    cout << "Double number: " << var << endl;
}

// function with int type single parameter
void displayit(int var) {
    cout << "Integer number: " << var << endl;
}

int main() {

    int a = 8;
    double b = 8.5;

    // call function with int type parameter
    displayit(a); //each case they tries to match.Its context base.

    // call function with double type parameter
    displayit(b);

    // call function with 2 parameters
    displayit(a, b);

    return 0;
}