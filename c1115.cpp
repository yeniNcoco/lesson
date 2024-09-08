#include <iostream>

int main(){
   /* int num =1;
    int num2;
    std::cout << "input?";
    std::cin >> num;
    std::cin >> num2;
    std::cout << num << std::
    endl << num2;*/
    std::string name;
    std::cout << "input name: ";
    std::cin >> name;
    int age ;
    std::cout << "input age: ";
    std::cin >> age;
    std::cout << name << std::endl << age;
//cmd + c 복사 cmd + v 
/*if(age>=20){
std::cout<< "this person is adult";
}*/
if(age>=10 && age <20){
    std::cout << "this person is teen";
}
else{
    std::cout<<"this person is adult";

}
int a;
std::cin>>a;
if(a%2==0){
    std::cout<<"this number is even num";
}
else{
    std::cout<<"this number is odd num";
}
    return 0;
}