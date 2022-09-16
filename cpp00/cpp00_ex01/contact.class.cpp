#include <iostream>
#include "contact.class.hpp"

Contact::Contact(){
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_num = "";
    this->darkest_secret = "";
}

Contact::Contact(std::string f_nm, std::string l_nm, std::string nknm, std::string ph_n, std::string drk_sec){
    this->first_name = f_nm;
    this->last_name = l_nm;
    this->nickname = nknm;
    this->phone_num = ph_n;
    this->darkest_secret = drk_sec;
}

std::string Contact::get_fn(void){
    return this->first_name;
}

std::string Contact::get_ln(void){
    return this->last_name;
}

std::string Contact::get_nknm(void){
    return this->nickname;
}

std::string Contact::get_phone(void){
    return this->phone_num;
}

std::string Contact::get_drk_sec(void){
    return this->darkest_secret;
}
