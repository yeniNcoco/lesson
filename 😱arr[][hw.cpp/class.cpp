#include <iostream>
#include <string>
using namespace std;

class class1{
public: 
int num = 10;
double num2;
class1(){}
void print(){
  cout<<"class1"<<endl;
}
};
string printmany(int num){ //(전달받을 변수선언) parameter
cout<<"print1"<<endl;
cout<<"print2"<<endl;
cout<<"print3"<<endl;
cout<<"print4"<<endl;
cout<<"print5"<<endl;
cout<<"print"<<num<<endl;
return "print" + to_string(num);
}
int main(){
class1 object1;
cout<<object1.num<<endl;
object1.num=72;
cout<<object1.num<<endl;
object1.num2=89.4335;
cout<<object1.num2<<endl;
class1 object2;
cout<<object2.num;
string s=printmany(100);
cout<<s<<endl;
object1.print();
}

