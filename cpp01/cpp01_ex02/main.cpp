#include <iostream>

int main (void){
    std::string str = "HI THIS IS BRAIN";
    std::string *strP = &str;
    std::string &strR = str;

    std::cout << "adress of str : " << &str << std::endl;
    std::cout << "adress of strR : " << &strR << std::endl;
    std::cout << "adress of strP : " << strP << std::endl;

    std::cout << "value of str : " << str << std::endl;
    std::cout << "value of strR : " << strR << std::endl;
    std::cout << "value of strP : " << *strP << std::endl;

    return 0;
}