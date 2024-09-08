#include <iostream>
int main(){
    int num1 = 5;
    int num2 = 5;

    // 전위 증가 연산자
    std::cout << "전위 증가 연산자:" << std::endl;
    std::cout << "num1: " << ++num1 << std::endl;  // num1을 1 증가시키고 값을 출력 (num1은 이제 6)
    std::cout << "현재 num1: " << num1 << std::endl;  // num1의 현재 값 출력

    // 후위 증가 연산자
    std::cout << "\n후위 증가 연산자:" << std::endl;
    std::cout << "num2: " << num2++ << std::endl;  // 현재 num2를 출력하고 num2를 1 증가시킴 (num2는 이제 6)
    std::cout << "현재 num2: " << num2 << std::endl;  // num2의 현재 값 출력

    return 0;  

}
