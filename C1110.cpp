#include <iostream>

using namespace std;

int main()
{
    std::cout<<"Hello";
    int a;
    a = 7;
    std::cout<< a;
    a = 10;
    std::cout<<a;
    const int b = 20;
    std::cout<<b;
   
    // 관계 연산자 예시 코드
    int x = 5;
    int y = 8;

    bool isEqual = (x == y);
    bool isNotEqual = (x != y);
    bool isGreater = (x > y);
    bool isLess = (x < y);
    bool isGreaterOrEqual = (x >= y);
    bool isLessOrEqual = (x <= y);

    // 논리 연산자 예시 코드
    bool logicalAnd = (x > 0 && y > 0);
    bool logicalOr = (x > 0 || y > 0);
    bool logicalNot = !(x > 0);

    // 결과 출력
    std::cout << "관계 연산자 결과:" << std::endl;
    std::cout << "Equal: " << isEqual << std::endl;
    std::cout << "Not Equal: " << isNotEqual << std::endl;
    std::cout << "Greater: " << isGreater << std::endl;
    std::cout << "Less: " << isLess << std::endl;
    std::cout << "Greater or Equal: " << isGreaterOrEqual << std::endl;
    std::cout << "Less or Equal: " << isLessOrEqual << std::endl;

    std::cout << "\n논리 연산자 결과:" << std::endl;
    std::cout << "Logical AND: " << logicalAnd << std::endl;
    std::cout << "Logical OR: " << logicalOr << std::endl;
    std::cout << "Logical NOT: " << logicalNot << std::endl;

    return 0;

}