#include "easyfind.hpp"

int main (){
    
    std::cout << "example with a vector container : " << std::endl;
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    if(easyFind(v, 7))
        std::cout << "the number has been found in the container " << std::endl;
    else 
        std::cout << "the number has NOT been found in the container " << std::endl;
    if(easyFind(v, 5))
        std::cout << "the number has been found in the container " << std::endl;
    else 
        std::cout << "the number has NOT been found in the container " << std::endl;
    
    std::cout << "example with a list container : " << std::endl;
    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    if(easyFind(l, 7))
        std::cout << "the number has been found in the container " << std::endl;
    else 
        std::cout << "the number has NOT been found in the container " << std::endl;
    if(easyFind(l, 5))
        std::cout << "the number has been found in the container " << std::endl;
    else 
        std::cout << "the number has NOT been found in the container " << std::endl;
}