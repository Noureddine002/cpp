#include "functions.hpp"

bool check_validity(std::string &str){
    unsigned int i = 0;
    if(check_is_literal(str))
        return true;
    if(isalpha(str[0]) && str.length() == 1)
        return true;
    while(i < str.size()){
        if(!isdigit(str[i]) && str[i] != '+' && str[i] != '.' && str[i] != '-' && str[i] != 'f')
            return false;
        i++;
    }
    return true;
}

bool check_is_literal(std::string &str){
    if(str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan"){
        return true;
    }
    return false;
}

static void conv_int(std::string &str){
    if(check_is_literal(str)){
        std::cout << " This conversion is not possible !" << std::endl;
        return ;
    }
    std::cout << std::atoi(str.c_str()) << std::endl;
}

static void conv_char(std::string &str){
    if(check_is_literal(str)){
        std::cout << " This conversion is not possible !" << std::endl;
        return ;
    }
    char c = static_cast<char>(atoi(str.c_str()));
    if(isprint(c))
        std::cout << "'" << c << "'" << std::endl;
    else{
        std::cout << " This is a non-printabel character !" << std::endl;
        return ;
    }
}

static void conv_float(std::string &str){
    float num = std::stof(str);
    if(!(num - static_cast<int>(num))){
        std::cout << num << ".0f" << std::endl;
        return ;
    }
    std::cout << num << "f" << std::endl;
}

static void conv_double(std::string &str){
    double num = std::stod(str);
    if(!(num - static_cast<int>(num))){
        std::cout << num << ".0" << std::endl;
        return ;
    }
    std::cout << num << std::endl;
}

void conversion_to_types(std::string &str){
    std::cout << "char : ", conv_char(str);
    std::cout << "int : ", conv_int(str);
    std::cout << "float : ", conv_float(str);
    std::cout << "double : ", conv_double(str);
}