#include <iostream>
#include <string>
using namespace std;
class Dog{
private:
    string type;
    string name;
    int happiness;
    int age;
public:
    Dog(string type, string name, int age) : type(type), name(name), age(age), happiness(0){} //constructer 
    void feed(){
       cout << "This dog is eating"<< endl;
       happiness +=10;
    }
    void walk(){
        cout << "This Dog is walking"<< endl;
        happiness +=15;
    }
}; //class 맨 끝에는 ;
int main(){

Dog dog1("Bichon", "coco", 5);
while(1){
    cout << "Feed: 1"<<endl;
    cout <<"Take a walk: 2"<<endl;
    int cho;
    cin>> cho;
    if(cho ==1){
        dog1.feed();
    }else if(cho ==2){
        dog1.walk();
    }
}

}