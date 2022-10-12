#include "functions.hpp"

int main(int ac, char **av){
    if(ac != 2){
        std::cout << "The number of args is invalid !" << std::endl;
        return 0;
    }
    std::string str = av[1];
    conversion_to_types(str);
    return 0;
}