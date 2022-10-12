#include "functions.hpp"

bool check_literal(std::string str){
    if(str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan"){
        return true;
    }
    return false;
}

bool check_int(std::string str){
    int i = 0;
    while(str[i]){
        if(str[0] != '-' && str[0] != '+' && !isdigit(str[1]) && !isdigit(str[i]))
            return false;
        if((str[0] == '-' || str[0] == '+') && !isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

bool check_float(std::string str){
    int i = 0;
    while(str[i] != '.'){
        if(!isdigit(str[i]) && (str[0] != '-' && str[0] != '+' && !isdigit(str[1])))
            return false;
        if((str[0] == '-' || str[0] == '+') && !isdigit(str[1]))
            return false;
        i++;  
    }
    if(str[i] == '.'){
        ++i;
        while(str[i]){
            if(!isdigit(str[i]) && str[i] != 'f')
                return false;
            if(str[i] == 'f' && str[i + 1] != '\0')
                return false;
            i++;
        }
    }
    if(str[i] == '\0' && str[i - 1] == 'f')
        return true;
    return false;
}

bool check_double(std::string str){
    int i = 0;
    while(str[i] != '.'){
        if(str[0] != '-' && str[0] != '+' && !isdigit(str[1]) && !isdigit(str[i]))
            return false;
        if((str[0] == '-' || str[0] == '+') && !isdigit(str[i]))
            return false;
        i++;  
    }
    if(str[i] == '.'){
        ++i;
        while(str[i]){
            if(!isdigit(str[i]))
                return false;
            i++;
        }
    }
    return true;
}

bool check_char(std::string str){
    if(isalpha(str[0]) && str.length() == 1)
        return true;
    return false;
}

static void conv_int(std::string str){
    int num;
    num = std::atoi(str.c_str());
    std::cout << std::fixed << std::setprecision(1);
    if(isprint(num))
        std::cout << "char: " << "'" << static_cast<char>(num) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << num << std::endl;
    std::cout << "float: " << static_cast<float>(num) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(num) << std::endl;  
}

static void conv_char(std::string str){
    std::cout << std::fixed << std::setprecision(1);
    char c;
    c = str[0];
    if(isprint(c))
        std::cout << "char: " << "'" << static_cast<char>(c) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl; 
}

static void conv_float(std::string str){
    float num = std::stof(str);
    std::cout << std::fixed << std::setprecision(1);
    if(isprint(num))
        std::cout << "char: " << "'" << static_cast<char>(num) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(num) << std::endl;
    std::cout << "float: " << num << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(num) << std::endl; 
}

static void conv_double(std::string str){
    double num = std::stod(str);
    std::cout << std::fixed << std::setprecision(1);
    if(isprint(num))
        std::cout << "char: " << "'" << static_cast<char>(num) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(num) << std::endl;
    std::cout << "float: " << static_cast<float>(num) << 'f' << std::endl;
    std::cout << "double: " << num << std::endl;
}

static void conv_literal(std::string str){
    if(str == "-inff" || str == "-inf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : -inff" << std::endl;
        std::cout << "double : -inf" << std::endl;
    }
    else if(str == "+inff" || str == "+inf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : +inff" << std::endl;
        std::cout << "double : +inf" << std::endl;
    }
    else if(str == "nanf" || str == "nan")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
}

void conversion_to_types(std::string str){
    if(check_int(str))
        conv_int(str);
    else if(check_char(str))
        conv_char(str);
    else if(check_float(str))
        conv_float(str);
    else if(check_double(str))
        conv_double(str);
    else if(check_literal(str))
        conv_literal(str);
    else
        std::cout << "error !!" << std::endl;
}