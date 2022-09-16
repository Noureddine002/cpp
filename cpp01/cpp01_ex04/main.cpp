#include <iostream>
#include <fstream>
#include <string>

std::string replace(std::string str1, std::string str2, std::string str){
    size_t index;
    if(str1 == str2){
        std::cerr << "the 1st and 2nd strings are the same !" << std::endl;
    }
    while((index = str.find(str1)) != std::string::npos){
        str = str.substr(0, index) + str2 + str.substr(index + str1.length(), -1);
    }
    return str;
}

int main (int ac, char **av){
    if(ac == 4){
        std::string file_name = av[1];
        std::ifstream file(file_name);
        if(file.fail()){
            std::cerr << "Could not open the FILE" << file_name << "check again !" << std::endl;
            return 0;
        }
        file_name += ".replace";
        std::ofstream file_rep(file_name);
        if(file_rep.fail()){
            std::cerr << "Could not open the FILE" << file_name << "check again !" << std::endl;
            return 0;
        }
        std::string str;
        std::getline(file, str, '\0');
        str = replace(av[2], av[3], str);
        file_rep << str;
        file.close();
        file_rep.close();
    }
    else {
        std::cerr << "The number or args is WRONG !" << std::endl;
    }
    return 0;
}